#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
255,
256,
257,
281,
282,
283,
293,
294,
295,
296,
383,
384,
385,
388,
419,
420,
422,
424,
426,
428,
433,
441,
442,
443,
444,
445,
446,
447,
448,
449,
530,
531,
583,
589,
592,
594,
599,
600,
602,
603,
607,
608,
610,
612,
613,
616,
617,
618,
621,
624,
626,
628,
637,
692,
694,
696,
706,
707,
708,
710,
716,
717,
718,
719,
720,
728,
729,
730,
734,
735,
737,
739,
917,
1065,
1066,
6263,
6264,
6266,
6267,
6268,
6269,
6270,
6272,
6274,
6276,
6284,
6286,
6291,
6293,
6295,
6297,
6348,
6349,
6351,
6352,
6353,
6354,
6355,
6357,
6359,
7209,
7213,
7215,
7216,
7217,
7218,
7408,
7409,
7410,
7411,
7427,
7428,
7429,
7431,
7470,
7528,
7530,
7539,
7540,
7541,
7542,
7908,
7911,
7912,
7938,
7955,
7962,
7969,
7980,
7983,
8003,
8074,
8076,
8085,
8087,
8088,
8095,
8109,
8129,
8130,
8138,
8140,
8147,
8148,
8151,
8153,
8158,
8164,
8165,
8172,
8174,
8186,
8189,
8190,
8191,
8202,
8211,
8217,
8218,
8219,
8221,
8222,
8239,
8241,
8255,
8272,
8299,
8324,
8325,
8740,
8823,
8824,
8968,
8969,
8973,
8976,
9038,
9385,
9386,
9597,
9607,
10142,
10163,
10165,
10167,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
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
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
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
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
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
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
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
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 255,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 281,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 282,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 283,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 293,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 294,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 295,
ves_icall_System_Enum_InternalGetCorElementType,
// token 296,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 383,
ves_icall_System_Environment_get_ProcessorCount,
// token 384,
ves_icall_System_Environment_get_TickCount,
// token 385,
ves_icall_System_Environment_get_TickCount64,
// token 388,
ves_icall_System_Environment_FailFast_raw,
// token 419,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 420,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 422,
ves_icall_System_GC_SuppressFinalize_raw,
// token 424,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 426,
ves_icall_System_GC_GetGCMemoryInfo,
// token 428,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 433,
ves_icall_System_Object_MemberwiseClone_raw,
// token 441,
ves_icall_System_Math_Ceiling,
// token 442,
ves_icall_System_Math_Cos,
// token 443,
ves_icall_System_Math_Floor,
// token 444,
ves_icall_System_Math_Log10,
// token 445,
ves_icall_System_Math_Pow,
// token 446,
ves_icall_System_Math_Sin,
// token 447,
ves_icall_System_Math_Sqrt,
// token 448,
ves_icall_System_Math_Tan,
// token 449,
ves_icall_System_Math_ModF,
// token 530,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 531,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 583,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 589,
ves_icall_RuntimeType_make_array_type_raw,
// token 592,
ves_icall_RuntimeType_make_byref_type_raw,
// token 594,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 599,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 600,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 602,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 603,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 607,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 608,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 610,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 612,
ves_icall_System_RuntimeType_getFullName_raw,
// token 613,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 616,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 617,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 618,
ves_icall_RuntimeType_GetFields_native_raw,
// token 621,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 624,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 626,
ves_icall_RuntimeType_GetName_raw,
// token 628,
ves_icall_RuntimeType_GetNamespace_raw,
// token 637,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 692,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 694,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 696,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 706,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 707,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 708,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 710,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 717,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 718,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 719,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 720,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 728,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 729,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 730,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 734,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 735,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 737,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 739,
ves_icall_System_String_FastAllocateString_raw,
// token 917,
ves_icall_System_Type_internal_from_handle_raw,
// token 1065,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1066,
ves_icall_System_ValueType_Equals_raw,
// token 6263,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6264,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6266,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6267,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6268,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6269,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6270,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6272,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6274,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6276,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6284,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6286,
mono_monitor_exit_icall_raw,
// token 6291,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6293,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6295,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6297,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6348,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6349,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6351,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6352,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6353,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6354,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6355,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6357,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6359,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7209,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7213,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7215,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7216,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7217,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7218,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7408,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7409,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7410,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7411,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7427,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7428,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7429,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7431,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7470,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7528,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7530,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7539,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7540,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7541,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7542,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7908,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7911,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7912,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7938,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7955,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7962,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7969,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7980,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7983,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8003,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8074,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8076,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8085,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8087,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8088,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8095,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8109,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8129,
ves_icall_reflection_get_token_raw,
// token 8130,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8138,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8140,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8147,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8148,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8151,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8153,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8158,
ves_icall_reflection_get_token_raw,
// token 8164,
ves_icall_get_method_info_raw,
// token 8165,
ves_icall_get_method_attributes,
// token 8172,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8174,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8186,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8189,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8190,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8191,
ves_icall_reflection_get_token_raw,
// token 8202,
ves_icall_InternalInvoke_raw,
// token 8211,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8217,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8218,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8219,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8221,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8222,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8239,
ves_icall_InvokeClassConstructor_raw,
// token 8241,
ves_icall_InternalInvoke_raw,
// token 8255,
ves_icall_reflection_get_token_raw,
// token 8272,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8299,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8324,
ves_icall_reflection_get_token_raw,
// token 8325,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8740,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8823,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8824,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 8968,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8969,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8973,
ves_icall_ModuleBuilder_getToken_raw,
// token 8976,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9038,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9385,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9386,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9597,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9607,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10142,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10163,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10165,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10167,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
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
4,
0,
4,
0,
0,
0,
4,
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
0,
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
0,
0,
0,
0,
0,
0,
};
