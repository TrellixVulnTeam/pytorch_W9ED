# DO NOT EDIT! This file was generated by jschema_to_python version 0.0.1.dev29,
# with extension for dataclasses and type annotation.

from __future__ import annotations

import dataclasses
from typing import Any


@dataclasses.dataclass
class WebRequest(object):
    """Describes an HTTP request."""

    body: Any
    headers: Any
    index: Any
    method: Any
    parameters: Any
    properties: Any
    protocol: Any
    target: Any
    version: Any


# flake8: noqa
