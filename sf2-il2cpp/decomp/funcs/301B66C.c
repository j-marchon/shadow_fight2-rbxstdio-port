// JHJLHLANACF$$GBCDHIOCFJJ @ RVA 0x301B66C

System_Collections_IEnumerator_o *
JHJLHLANACF__GBCDHIOCFJJ(JHJLHLANACF_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c0f & 1) == 0) {
    FUN_01bab630(&JHJLHLANACF_OICMKLMNDMI_TypeInfo);
    DAT_04565c0f = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JHJLHLANACF_OICMKLMNDMI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

