// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$HKEGMNIBLIG @ RVA 0x3121214

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__HKEGMNIBLIG
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o *pSVar1;
  JCFJFJCKLKG_o *NLKBNMDMJEB;
  
  if ((DAT_04566626 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&StringLiteral_8364);
    FUN_01bab630(&StringLiteral_1334);
    FUN_01bab630(&StringLiteral_8360);
    DAT_04566626 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8364,(MethodInfo *)0x0);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)0x0;
  }
  else {
    if (IMMNELPBGIF->klass != (Il2CppClass *)JCFJFJCKLKG_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
              (__this,(JCFJFJCKLKG_o *)IMMNELPBGIF,method);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)IMMNELPBGIF;
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar1 = System_String__Concat(StringLiteral_8360,pSVar1,StringLiteral_1334,(MethodInfo *)0x0);
  PLIIGOCLJDL__MAAFGOJFCHD(IMMNELPBGIF != (Il2CppObject *)0x0,pSVar1,NLKBNMDMJEB,(MethodInfo *)0x0);
  return;
}

