// Nekki.SF2.GUI.Dialogs.NewsDialog$$GPAJFKADBKK @ RVA 0x350D904

void Nekki_SF2_GUI_Dialogs_NewsDialog__GPAJFKADBKK
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  GCIFMNHADDF_o *pGVar1;
  System_Action_T__o *IELDNEAAPBE;
  FAIJGJCCKJC_o *pFVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  ushort local_24 [2];
  
  if ((DAT_045688db & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_BMKMFHIABON__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045688db = 1;
  }
  (__this->fields).GoShopAfterClose = true;
  if ((__this->fields).CloseOnBuy != false) {
    if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
LAB_0360da4c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar2 = (MEJOGHDACNG->fields).IJDPHADMDKN;
    if ((pFVar2 != (FAIJGJCCKJC_o *)0x0) &&
       (pJVar3 = (pFVar2->fields).FBBBEHLGDJK, pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
      local_24[0] = 0;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)SUB82(local_24,0),(pJVar3->fields).CBKACDJHFNE,
                 Method_System_Nullable<bool>__ctor__);
      if (((local_24[0] & 0xff) != 0) && (0xff < local_24[0])) {
        pGVar1 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pGVar1 != (GCIFMNHADDF_o *)0x0) {
          __this_00 = (pGVar1->fields)._AOOFDKJAALA_k__BackingField;
          IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_00 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,IELDNEAAPBE,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
            return;
          }
        }
        goto LAB_0360da4c;
      }
    }
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  }
  return;
}

