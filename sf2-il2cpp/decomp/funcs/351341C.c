// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$Init @ RVA 0x351341C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__Init
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t DNBBBGEENMM;
  System_String_o *GKLEODLEPMA;
  System_String_o **ppSVar3;
  System_String_o *DOEJEADIJEJ;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568904 & 1) == 0) {
    FUN_01bab630(&JDCLNBHKHJC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568904 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 03613470 to 0371347b has its CatchHandler @ 03613080 */
    bVar1 = (JDCLNBHKHJC_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0361347c to 03713483 has its CatchHandler @ 03613484 */
                    /* catch() { ... } // from try @ 03613408 with catch @ 03613484
                       catch() { ... } // from try @ 0361347c with catch @ 03613484 */
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)JDCLNBHKHJC_TypeInfo)) {
      (__this->fields).ECIBAPAHFLM = IMMNELPBGIF[1].monitor;
      thunk_FUN_01c20e04(&(__this->fields).ECIBAPAHFLM);
      (__this->fields).super.super.NIEHEOKFPAN = (System_String_o *)IMMNELPBGIF[2].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.super.FKKACPDDADI = *(int32_t *)&IMMNELPBGIF[2].monitor;
      ppSVar3 = &(__this->fields).super.super.LLBBHINDIDB;
      *ppSVar3 = (System_String_o *)IMMNELPBGIF[3].klass;
      thunk_FUN_01c20e04(ppSVar3);
      (__this->fields).super.super.FHLAKGNIFAF = *(int32_t *)&IMMNELPBGIF[3].monitor;
      if (IMMNELPBGIF[4].klass != (Il2CppClass *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                   (System_Action_T__o *)IMMNELPBGIF[4].klass,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      }
      (__this->fields).FCKCGNHILFE =
           (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)IMMNELPBGIF[1].klass;
      thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE);
    }
  }
  CJNHFNHJHPE = (__this->fields).super.super.LLBBHINDIDB;
  GKLEODLEPMA = (__this->fields).ECIBAPAHFLM;
  DOEJEADIJEJ = (__this->fields).super.super.NIEHEOKFPAN;
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  DNBBBGEENMM = 3;
  if (bVar2) {
    DNBBBGEENMM = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,DOEJEADIJEJ,CJNHFNHJHPE,
             DNBBBGEENMM,(MethodInfo *)0x0);
  return;
}

