// Nekki.SF2.GUI.Fight.ComboModel$$.ctor @ RVA 0x332CC94

void Nekki_SF2_GUI_Fight_ComboModel___ctor
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  GOJLGHMMDBO_o *__this_00;
  GOJLGHMMDBO_o **ppGVar1;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_01;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678d1 & 1) == 0) {
    FUN_01bab630(&GOJLGHMMDBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>__ctor__);
    DAT_045678d1 = 1;
    method = extraout_x1;
  }
  __this_00 = (GOJLGHMMDBO_o *)thunk_FUN_01bda818(GOJLGHMMDBO_TypeInfo,method);
  GOJLGHMMDBO___ctor(__this_00,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).AMKECFKEGJH;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  (__this->fields).PJINFMLCNGI = 600.0;
  (__this->fields).GDODLGBHLCD = 245.0;
  (__this->fields).JOHMFEFNLPI.fields = (UnityEngine_Vector2_Fields)0xc220000000000000;
  __this_01 = (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
  ppSVar2 = &(__this->fields).EGHLGEIJLAM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>__ctor__);
  return;
}

