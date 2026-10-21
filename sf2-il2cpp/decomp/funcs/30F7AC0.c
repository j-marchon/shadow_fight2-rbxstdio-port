// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_EscapeClickHidesNotification @ RVA 0x30F7AC0

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__get_EscapeClickHidesNotification(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
                    /* try { // try from 031f7ac4 to 032f7acb has its CatchHandler @ 031f7acc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f7ab0 with catch @ 031f7acc
                       catch(type#2 @ 00000000) { ... } // from try @ 031f7ac4 with catch @ 031f7acc
                        */
  if ((DAT_0456646e & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_0456646e = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[7].klass != (Il2CppClass *)0x0)) {
    return (bool)*(undefined1 *)&((pIVar1[7].klass)->_1).name;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

