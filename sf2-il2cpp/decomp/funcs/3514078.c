// FEKEAPCCOOB$$CBEKFENKCGJ @ RVA 0x3514078

void FEKEAPCCOOB__CBEKFENKCGJ
               (FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,bool BLOGOHKEPHI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_o *LGHOMHOPNEP;
  MethodInfo *method_00;
  int32_t CJPDDDECBPD;
  
  method_00 = (MethodInfo *)(ulong)BLOGOHKEPHI;
  if ((DAT_0456890c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456890c = 1;
  }
  LGHOMHOPNEP = FEKEAPCCOOB__MJEMLECEAHI(__this,DPJIDNBJIBG,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    CJPDDDECBPD = 0;
    if (!BLOGOHKEPHI) {
      CJPDDDECBPD = 2;
    }
    LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP,CJPDDDECBPD,true,(MethodInfo *)0x0);
    return;
  }
  return;
}

