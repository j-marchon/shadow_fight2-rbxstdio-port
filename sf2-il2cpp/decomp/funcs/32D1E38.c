// OOMEDFCGKJB$$FNFOOIOHEIJ @ RVA 0x32D1E38

void OOMEDFCGKJB__FNFOOIOHEIJ(OOMEDFCGKJB_o *__this,MethodInfo *method)

{
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  
  if ((DAT_0456755f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_OOMEDFCGKJB_CEKPJBGNDJC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    DAT_0456755f = 1;
    method = extraout_x1;
  }
  ppNVar1 = &(__this->fields).KGDHODNEEFI;
  __this_00 = *ppNVar1;
  IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method);
  System_Action<object>___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    (__this->fields).KGDHODNEEFI = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    thunk_FUN_01c20e04(ppNVar1,0);
    OOMEDFCGKJB__JMIAPNDCAIB(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

