// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$OnDestroy @ RVA 0x32B5520

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  KCJMBDCBIIF_o *pKVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456744c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_OHDOIFLJMMF__);
    DAT_0456744c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    (*(pKVar1->klass->vtable)._9_IKAAFAICDMD.methodPtr)
              (pKVar1,__this,(pKVar1->klass->vtable)._9_IKAAFAICDMD.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar2 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
    if (pKVar2 != (KCJMBDCBIIF_o *)0x0) {
      JICOLGELJGE<object>__OHDOIFLJMMF
                ((JICOLGELJGE_T__o *)pKVar2,(Il2CppObject *)__this,
                 Method_JICOLGELJGE<DLOALGNBPNL>_OHDOIFLJMMF__);
      pKVar2 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
      if (pKVar2 != (KCJMBDCBIIF_o *)0x0) {
        (*(pKVar2->klass->vtable)._4_BOADOENMDDN.methodPtr)
                  (pKVar2,(pKVar2->klass->vtable)._4_BOADOENMDDN.method);
        (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

