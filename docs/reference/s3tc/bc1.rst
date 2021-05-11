quicktex.s3tc.bc1 module
========================

.. automodule:: quicktex.s3tc.bc1

    .. autoclass:: BC1Block
        :members:

    .. autoclass:: BC1Texture
        :members:

    .. autoclass:: BC1Encoder

        .. automethod:: set_level

        .. autoproperty:: color_mode(self) -> ColorMode
        .. autoproperty:: interpolator(self) -> quicktex.s3tc.interpolator.Interpolator

        .. autoclass:: quicktex.s3tc.bc1::BC1Encoder.ColorMode

        **Advanced API**

        Additional properties are provided for finer-grained control over quality and performance

        .. autoproperty:: error_mode(self) -> ErrorMode
        .. autoproperty:: endpoint_mode(self) -> EndpointMode

        .. autoproperty:: two_ls_passes(self) -> bool
        .. autoproperty:: two_ep_passes(self) -> bool
        .. autoproperty:: two_cf_passes(self) -> bool

        .. autoproperty:: exhaustive(self) -> bool
        .. autoproperty:: search_rounds(self) -> int
        .. autoproperty:: orderings(self) -> tuple[int, int]
        .. autoproperty:: power_iterations(self) -> int
        .. autoattribute:: max_power_iterations
        .. autoattribute:: min_power_iterations

        .. autoclass:: quicktex.s3tc.bc1::BC1Encoder.EndpointMode
        .. autoclass:: quicktex.s3tc.bc1::BC1Encoder.ErrorMode

    .. autoclass:: BC1Decoder

        .. autoproperty:: interpolator(self) -> quicktex.s3tc.interpolator.Interpolator
        .. autoproperty:: write_alpha(self) -> bool
