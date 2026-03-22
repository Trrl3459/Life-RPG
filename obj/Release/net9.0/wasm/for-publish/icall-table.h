#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
218,
231,
232,
233,
234,
235,
236,
237,
238,
239,
242,
243,
244,
417,
418,
419,
447,
448,
449,
476,
477,
478,
595,
596,
597,
600,
643,
644,
645,
648,
650,
652,
654,
659,
667,
668,
669,
670,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
685,
686,
687,
688,
689,
690,
691,
791,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
809,
810,
811,
812,
813,
814,
815,
876,
885,
886,
958,
965,
968,
970,
976,
977,
979,
980,
984,
986,
989,
990,
992,
993,
996,
997,
998,
1001,
1003,
1006,
1008,
1010,
1017,
1022,
1096,
1098,
1100,
1110,
1111,
1112,
1114,
1120,
1121,
1122,
1123,
1124,
1132,
1133,
1134,
1138,
1139,
1142,
1146,
1147,
1148,
1445,
1664,
1665,
10352,
10353,
10355,
10356,
10357,
10358,
10359,
10361,
10362,
10363,
10364,
10365,
10383,
10385,
10390,
10392,
10394,
10396,
10446,
10452,
10453,
10455,
10456,
10457,
10458,
10459,
10461,
10463,
11656,
11660,
11662,
11663,
11664,
11665,
12114,
12115,
12116,
12117,
12138,
12139,
12140,
12142,
12143,
12198,
12285,
12288,
12297,
12298,
12299,
12300,
12301,
12302,
12655,
12656,
12661,
12662,
12702,
12744,
12751,
12758,
12769,
12773,
12797,
12880,
12882,
12893,
12895,
12896,
12897,
12904,
12919,
12939,
12940,
12948,
12950,
12957,
12958,
12961,
12963,
12968,
12974,
12975,
12982,
12984,
12996,
12999,
13000,
13001,
13012,
13022,
13028,
13029,
13030,
13032,
13033,
13050,
13052,
13067,
13090,
13091,
13092,
13119,
13149,
13150,
13846,
13860,
13948,
13949,
14176,
14177,
14185,
14186,
14187,
14193,
14264,
14788,
14789,
15177,
15178,
15184,
15194,
16650,
16671,
16673,
16675,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal (int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureHelper_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 218,
ves_icall_System_Array_InternalCreate,
// token 231,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 232,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 233,
ves_icall_System_Array_CanChangePrimitive,
// token 234,
ves_icall_System_Array_FastCopy,
// token 235,
ves_icall_System_Array_GetLengthInternal_raw,
// token 236,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 237,
ves_icall_System_Array_GetGenericValue_icall,
// token 238,
ves_icall_System_Array_GetValueImpl_raw,
// token 239,
ves_icall_System_Array_SetGenericValue_icall,
// token 242,
ves_icall_System_Array_SetValueImpl_raw,
// token 243,
ves_icall_System_Array_InitializeInternal_raw,
// token 244,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 417,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 418,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 419,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 447,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 448,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 449,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 476,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 477,
ves_icall_System_Enum_InternalGetCorElementType,
// token 478,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 595,
ves_icall_System_Environment_get_ProcessorCount,
// token 596,
ves_icall_System_Environment_get_TickCount,
// token 597,
ves_icall_System_Environment_get_TickCount64,
// token 600,
ves_icall_System_Environment_FailFast_raw,
// token 643,
ves_icall_System_GC_GetCollectionCount,
// token 644,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 645,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 648,
ves_icall_System_GC_SuppressFinalize_raw,
// token 650,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 652,
ves_icall_System_GC_GetGCMemoryInfo,
// token 654,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 659,
ves_icall_System_Object_MemberwiseClone_raw,
// token 667,
ves_icall_System_Math_Acos,
// token 668,
ves_icall_System_Math_Acosh,
// token 669,
ves_icall_System_Math_Asin,
// token 670,
ves_icall_System_Math_Asinh,
// token 671,
ves_icall_System_Math_Atan,
// token 672,
ves_icall_System_Math_Atan2,
// token 673,
ves_icall_System_Math_Atanh,
// token 674,
ves_icall_System_Math_Cbrt,
// token 675,
ves_icall_System_Math_Ceiling,
// token 676,
ves_icall_System_Math_Cos,
// token 677,
ves_icall_System_Math_Cosh,
// token 678,
ves_icall_System_Math_Exp,
// token 679,
ves_icall_System_Math_Floor,
// token 680,
ves_icall_System_Math_Log,
// token 681,
ves_icall_System_Math_Log10,
// token 682,
ves_icall_System_Math_Pow,
// token 683,
ves_icall_System_Math_Sin,
// token 685,
ves_icall_System_Math_Sinh,
// token 686,
ves_icall_System_Math_Sqrt,
// token 687,
ves_icall_System_Math_Tan,
// token 688,
ves_icall_System_Math_Tanh,
// token 689,
ves_icall_System_Math_FusedMultiplyAdd,
// token 690,
ves_icall_System_Math_Log2,
// token 691,
ves_icall_System_Math_ModF,
// token 791,
ves_icall_System_MathF_Acos,
// token 792,
ves_icall_System_MathF_Acosh,
// token 793,
ves_icall_System_MathF_Asin,
// token 794,
ves_icall_System_MathF_Asinh,
// token 795,
ves_icall_System_MathF_Atan,
// token 796,
ves_icall_System_MathF_Atan2,
// token 797,
ves_icall_System_MathF_Atanh,
// token 798,
ves_icall_System_MathF_Cbrt,
// token 799,
ves_icall_System_MathF_Ceiling,
// token 800,
ves_icall_System_MathF_Cos,
// token 801,
ves_icall_System_MathF_Cosh,
// token 802,
ves_icall_System_MathF_Exp,
// token 803,
ves_icall_System_MathF_Floor,
// token 804,
ves_icall_System_MathF_Log,
// token 805,
ves_icall_System_MathF_Log10,
// token 806,
ves_icall_System_MathF_Pow,
// token 807,
ves_icall_System_MathF_Sin,
// token 809,
ves_icall_System_MathF_Sinh,
// token 810,
ves_icall_System_MathF_Sqrt,
// token 811,
ves_icall_System_MathF_Tan,
// token 812,
ves_icall_System_MathF_Tanh,
// token 813,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 814,
ves_icall_System_MathF_Log2,
// token 815,
ves_icall_System_MathF_ModF,
// token 876,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 885,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 886,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 958,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 965,
ves_icall_RuntimeType_make_array_type_raw,
// token 968,
ves_icall_RuntimeType_make_byref_type_raw,
// token 970,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 976,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 977,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 979,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 980,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 984,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 986,
ves_icall_RuntimeType_GetPacking_raw,
// token 989,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 990,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 992,
ves_icall_System_RuntimeType_getFullName_raw,
// token 993,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 996,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 997,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 998,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1001,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1003,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1006,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1008,
ves_icall_RuntimeType_GetName_raw,
// token 1010,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1017,
ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal,
// token 1022,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1096,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1098,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1100,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1110,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1111,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1112,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1114,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1120,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1121,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1122,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1123,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1124,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1132,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1133,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1134,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1138,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1139,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1142,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1146,
ves_icall_System_String_FastAllocateString_raw,
// token 1147,
ves_icall_System_String_InternalIsInterned_raw,
// token 1148,
ves_icall_System_String_InternalIntern_raw,
// token 1445,
ves_icall_System_Type_internal_from_handle_raw,
// token 1664,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1665,
ves_icall_System_ValueType_Equals_raw,
// token 10352,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 10353,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 10355,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 10356,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 10357,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 10358,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 10359,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 10361,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 10362,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 10363,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 10364,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 10365,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 10383,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 10385,
mono_monitor_exit_icall_raw,
// token 10390,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 10392,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 10394,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 10396,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 10446,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 10452,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 10453,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 10455,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 10456,
ves_icall_System_Threading_Thread_GetState_raw,
// token 10457,
ves_icall_System_Threading_Thread_SetState_raw,
// token 10458,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 10459,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 10461,
ves_icall_System_Threading_Thread_YieldInternal,
// token 10463,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 11656,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 11660,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 11662,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 11663,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 11664,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 11665,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 12114,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 12115,
ves_icall_System_GCHandle_InternalFree_raw,
// token 12116,
ves_icall_System_GCHandle_InternalGet_raw,
// token 12117,
ves_icall_System_GCHandle_InternalSet_raw,
// token 12138,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 12139,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 12140,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 12142,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureHelper_raw,
// token 12143,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 12198,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 12285,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 12288,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 12297,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 12298,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 12299,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 12300,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 12301,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 12302,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 12655,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 12656,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 12661,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 12662,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 12702,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 12744,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 12751,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 12758,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 12769,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 12773,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 12797,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12880,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12882,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12893,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12895,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12896,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12897,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12904,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12919,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12939,
ves_icall_reflection_get_token_raw,
// token 12940,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12948,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12950,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12957,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12958,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12961,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12963,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12968,
ves_icall_reflection_get_token_raw,
// token 12974,
ves_icall_get_method_info_raw,
// token 12975,
ves_icall_get_method_attributes,
// token 12982,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12984,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12996,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12999,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 13000,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 13001,
ves_icall_reflection_get_token_raw,
// token 13012,
ves_icall_InternalInvoke_raw,
// token 13022,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 13028,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 13029,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 13030,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 13032,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 13033,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 13050,
ves_icall_InvokeClassConstructor_raw,
// token 13052,
ves_icall_InternalInvoke_raw,
// token 13067,
ves_icall_reflection_get_token_raw,
// token 13090,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 13091,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 13092,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 13119,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 13149,
ves_icall_reflection_get_token_raw,
// token 13150,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 13846,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 13860,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 13948,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 13949,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 14176,
ves_icall_ModuleBuilder_basic_init_raw,
// token 14177,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 14185,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 14186,
ves_icall_ModuleBuilder_getToken_raw,
// token 14187,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 14193,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 14264,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 14788,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 14789,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 15177,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 15178,
ves_icall_System_Diagnostics_Debugger_Log,
// token 15184,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 15194,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 16650,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 16671,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 16673,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 16675,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
};
