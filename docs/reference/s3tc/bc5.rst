quicktex.s3tc.bc5 module
========================

.. automodule:: quicktex.s3tc.bc5

    .. autoclass:: BC5Block
        :members:

    .. autoclass:: BC5Texture
        :members:

    .. autoclass:: BC5Encoder

        .. automethod:: __init__
        .. autoproperty:: bc4_encoders(self) -> tuple[quicktex.s3tc.bc4.BC4Encoder]
        .. autoproperty:: channels(self) -> tuple[int, int]

    .. autoclass:: BC5Decoder

        .. automethod:: __init__
        .. autoproperty:: bc4_decoders(self) -> tuple[quicktex.s3tc.bc4.BC4Decoder]
        .. autoproperty:: channels(self) -> tuple[int, int]