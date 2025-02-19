/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(pysqlite_connect__doc__,
"connect($module, /, database, timeout=5.0, detect_types=0,\n"
"        isolation_level=<unrepresentable>, check_same_thread=True,\n"
"        factory=ConnectionType, cached_statements=128, uri=False)\n"
"--\n"
"\n"
"Opens a connection to the SQLite database file database.\n"
"\n"
"You can use \":memory:\" to open a database connection to a database that resides\n"
"in RAM instead of on disk.");

#define PYSQLITE_CONNECT_METHODDEF    \
    {"connect", _PyCFunction_CAST(pysqlite_connect), METH_FASTCALL|METH_KEYWORDS, pysqlite_connect__doc__},

static PyObject *
pysqlite_connect_impl(PyObject *module, PyObject *database, double timeout,
                      int detect_types, PyObject *isolation_level,
                      int check_same_thread, PyObject *factory,
                      int cached_statements, int uri);

static PyObject *
pysqlite_connect(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"database", "timeout", "detect_types", "isolation_level", "check_same_thread", "factory", "cached_statements", "uri", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "connect", 0};
    PyObject *argsbuf[8];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 1;
    PyObject *database;
    double timeout = 5.0;
    int detect_types = 0;
    PyObject *isolation_level = NULL;
    int check_same_thread = 1;
    PyObject *factory = (PyObject*)clinic_state()->ConnectionType;
    int cached_statements = 128;
    int uri = 0;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 8, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!PyUnicode_FSConverter(args[0], &database)) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_pos;
    }
    if (args[1]) {
        if (PyFloat_CheckExact(args[1])) {
            timeout = PyFloat_AS_DOUBLE(args[1]);
        }
        else
        {
            timeout = PyFloat_AsDouble(args[1]);
            if (timeout == -1.0 && PyErr_Occurred()) {
                goto exit;
            }
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[2]) {
        detect_types = _PyLong_AsInt(args[2]);
        if (detect_types == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[3]) {
        isolation_level = args[3];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[4]) {
        check_same_thread = _PyLong_AsInt(args[4]);
        if (check_same_thread == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[5]) {
        factory = args[5];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[6]) {
        cached_statements = _PyLong_AsInt(args[6]);
        if (cached_statements == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    uri = PyObject_IsTrue(args[7]);
    if (uri < 0) {
        goto exit;
    }
skip_optional_pos:
    return_value = pysqlite_connect_impl(module, database, timeout, detect_types, isolation_level, check_same_thread, factory, cached_statements, uri);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_complete_statement__doc__,
"complete_statement($module, /, statement)\n"
"--\n"
"\n"
"Checks if a string contains a complete SQL statement.");

#define PYSQLITE_COMPLETE_STATEMENT_METHODDEF    \
    {"complete_statement", _PyCFunction_CAST(pysqlite_complete_statement), METH_FASTCALL|METH_KEYWORDS, pysqlite_complete_statement__doc__},

static PyObject *
pysqlite_complete_statement_impl(PyObject *module, const char *statement);

static PyObject *
pysqlite_complete_statement(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"statement", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "complete_statement", 0};
    PyObject *argsbuf[1];
    const char *statement;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 1, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!PyUnicode_Check(args[0])) {
        _PyArg_BadArgument("complete_statement", "argument 'statement'", "str", args[0]);
        goto exit;
    }
    Py_ssize_t statement_length;
    statement = PyUnicode_AsUTF8AndSize(args[0], &statement_length);
    if (statement == NULL) {
        goto exit;
    }
    if (strlen(statement) != (size_t)statement_length) {
        PyErr_SetString(PyExc_ValueError, "embedded null character");
        goto exit;
    }
    return_value = pysqlite_complete_statement_impl(module, statement);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_enable_shared_cache__doc__,
"enable_shared_cache($module, /, do_enable)\n"
"--\n"
"\n"
"Enable or disable shared cache mode for the calling thread.\n"
"\n"
"This method is deprecated and will be removed in Python 3.12.\n"
"Shared cache is strongly discouraged by the SQLite 3 documentation.\n"
"If shared cache must be used, open the database in URI mode using\n"
"the cache=shared query parameter.");

#define PYSQLITE_ENABLE_SHARED_CACHE_METHODDEF    \
    {"enable_shared_cache", _PyCFunction_CAST(pysqlite_enable_shared_cache), METH_FASTCALL|METH_KEYWORDS, pysqlite_enable_shared_cache__doc__},

static PyObject *
pysqlite_enable_shared_cache_impl(PyObject *module, int do_enable);

static PyObject *
pysqlite_enable_shared_cache(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"do_enable", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "enable_shared_cache", 0};
    PyObject *argsbuf[1];
    int do_enable;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 1, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    do_enable = _PyLong_AsInt(args[0]);
    if (do_enable == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = pysqlite_enable_shared_cache_impl(module, do_enable);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_register_adapter__doc__,
"register_adapter($module, type, caster, /)\n"
"--\n"
"\n"
"Registers an adapter with sqlite3\'s adapter registry.");

#define PYSQLITE_REGISTER_ADAPTER_METHODDEF    \
    {"register_adapter", _PyCFunction_CAST(pysqlite_register_adapter), METH_FASTCALL, pysqlite_register_adapter__doc__},

static PyObject *
pysqlite_register_adapter_impl(PyObject *module, PyTypeObject *type,
                               PyObject *caster);

static PyObject *
pysqlite_register_adapter(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyTypeObject *type;
    PyObject *caster;

    if (!_PyArg_CheckPositional("register_adapter", nargs, 2, 2)) {
        goto exit;
    }
    type = (PyTypeObject *)args[0];
    caster = args[1];
    return_value = pysqlite_register_adapter_impl(module, type, caster);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_register_converter__doc__,
"register_converter($module, name, converter, /)\n"
"--\n"
"\n"
"Registers a converter with sqlite3.");

#define PYSQLITE_REGISTER_CONVERTER_METHODDEF    \
    {"register_converter", _PyCFunction_CAST(pysqlite_register_converter), METH_FASTCALL, pysqlite_register_converter__doc__},

static PyObject *
pysqlite_register_converter_impl(PyObject *module, PyObject *orig_name,
                                 PyObject *callable);

static PyObject *
pysqlite_register_converter(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *orig_name;
    PyObject *callable;

    if (!_PyArg_CheckPositional("register_converter", nargs, 2, 2)) {
        goto exit;
    }
    if (!PyUnicode_Check(args[0])) {
        _PyArg_BadArgument("register_converter", "argument 1", "str", args[0]);
        goto exit;
    }
    if (PyUnicode_READY(args[0]) == -1) {
        goto exit;
    }
    orig_name = args[0];
    callable = args[1];
    return_value = pysqlite_register_converter_impl(module, orig_name, callable);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_enable_callback_trace__doc__,
"enable_callback_tracebacks($module, enable, /)\n"
"--\n"
"\n"
"Enable or disable callback functions throwing errors to stderr.");

#define PYSQLITE_ENABLE_CALLBACK_TRACE_METHODDEF    \
    {"enable_callback_tracebacks", (PyCFunction)pysqlite_enable_callback_trace, METH_O, pysqlite_enable_callback_trace__doc__},

static PyObject *
pysqlite_enable_callback_trace_impl(PyObject *module, int enable);

static PyObject *
pysqlite_enable_callback_trace(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    int enable;

    enable = _PyLong_AsInt(arg);
    if (enable == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = pysqlite_enable_callback_trace_impl(module, enable);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_adapt__doc__,
"adapt($module, obj, proto=PrepareProtocolType, alt=<unrepresentable>, /)\n"
"--\n"
"\n"
"Adapt given object to given protocol.");

#define PYSQLITE_ADAPT_METHODDEF    \
    {"adapt", _PyCFunction_CAST(pysqlite_adapt), METH_FASTCALL, pysqlite_adapt__doc__},

static PyObject *
pysqlite_adapt_impl(PyObject *module, PyObject *obj, PyObject *proto,
                    PyObject *alt);

static PyObject *
pysqlite_adapt(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *obj;
    PyObject *proto = (PyObject *)clinic_state()->PrepareProtocolType;
    PyObject *alt = NULL;

    if (!_PyArg_CheckPositional("adapt", nargs, 1, 3)) {
        goto exit;
    }
    obj = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    proto = args[1];
    if (nargs < 3) {
        goto skip_optional;
    }
    alt = args[2];
skip_optional:
    return_value = pysqlite_adapt_impl(module, obj, proto, alt);

exit:
    return return_value;
}
/*[clinic end generated code: output=d846459943008a9c input=a9049054013a1b77]*/
