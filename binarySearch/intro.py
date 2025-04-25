from manim import *
import numpy as np

class KillerIntro(ThreeDScene):
    def construct(self):
        self.set_camera_orientation(phi=75 * DEGREES, theta=45 * DEGREES)
        self.camera.background_color = BLACK

        axes = ThreeDAxes(
            x_range=[0, 10, 1],
            y_range=[-4, 4, 1],
            z_range=[-3, 3, 1],
            x_length=10,
            y_length=6,
            z_length=6,
        )
        labels = axes.get_axis_labels(x_label="t", y_label="Amplitude", z_label="Freq")

        self.play(Create(axes), Write(labels))

        # Composite function: a sum of sine waves
        def composite_wave(t):
            return (
                2 * np.sin(2 * PI * t) +
                1.5 * np.sin(4 * PI * t + PI / 3) +
                np.sin(6 * PI * t + PI / 6)
            )

        wave_graph = axes.plot(composite_wave, x_range=[0, 10], color=YELLOW)
        self.play(Create(wave_graph), run_time=2)

        self.wait(1)

        # Decompose into sine waves (visually)
        freqs = [1, 2, 3]
        amplitudes = [2, 1.5, 1]
        phases = [0, PI / 3, PI / 6]
        colors = [BLUE, RED, GREEN]

        waves = VGroup()
        for i in range(len(freqs)):
            wave = axes.plot(
                lambda t, f=freqs[i], a=amplitudes[i], p=phases[i]: a * np.sin(2 * PI * f * t + p),
                x_range=[0, 10],
                color=colors[i],
            )
            waves.add(wave)

        # Fade out original composite wave
        self.play(FadeOut(wave_graph))
        self.wait(0.5)

        # Animate sine wave components appearing one-by-one
        for wave in waves:
            self.play(Create(wave), run_time=1)

        self.wait(1)

        # Stack them in z-direction (like a 3D Fourier basis breakdown)
        stacked_waves = VGroup()
        for i, wave in enumerate(waves):
            stacked = wave.copy().shift(OUT * (i + 1.5))  # Z direction
            stacked_waves.add(stacked)

        self.play(*[Transform(waves[i], stacked_waves[i]) for i in range(3)], run_time=2)
        self.wait(0.5)

        # Add camera rotation to show 3D effect
        self.begin_ambient_camera_rotation(rate=0.1)
        self.wait(6)
        self.stop_ambient_camera_rotation()

        # Final message
        text = Text("Fourier Transform = Magic of Waves ✨", color=WHITE).scale(0.6).to_edge(DOWN)
        self.play(Write(text))
        self.wait(3)
