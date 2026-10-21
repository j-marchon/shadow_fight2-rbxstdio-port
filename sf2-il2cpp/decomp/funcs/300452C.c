// KELJDKIIHMM$$.ctor @ RVA 0x300452C

void KELJDKIIHMM___ctor(KELJDKIIHMM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__TableViewCell__o **ppSVar1;
  UnityEngine_SocialPlatforms_Range_Fields local_28;
  
  if ((DAT_04565b37 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_TableViewCell>_TypeInfo);
    DAT_04565b37 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_28.from = 0;
  local_28.count = 0;
  UnityEngine_SocialPlatforms_Range___ctor
            ((UnityEngine_SocialPlatforms_Range_o)&local_28,0,0,(MethodInfo *)0x0);
  (__this->fields).CIMDIANAHIM.fields = local_28;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_TableViewCell>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_TableViewCell>__ctor__);
  ppSVar1 = &(__this->fields)._IKBFEDMFOMJ_k__BackingField;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__TableViewCell__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

