// SFButton$$NOFDGKIEHKD @ RVA 0x34BB57C

System_Collections_IEnumerator_o *
SFButton__NOFDGKIEHKD(SFButton_o *__this,float NDPMILBBAPD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685dc & 1) == 0) {
    FUN_01bab630(&SFButton_JPGCLGHFPFI_TypeInfo);
    DAT_045685dc = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_JPGCLGHFPFI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(float *)&__this_00[2].monitor = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}

