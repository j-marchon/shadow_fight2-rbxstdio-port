// Nekki.SF2.GUI.Dialogs.StoryDialog$$Init @ RVA 0x32BFF4C

void Nekki_SF2_GUI_Dialogs_StoryDialog__Init
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  System_Action_o *CJNHFNHJHPE;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *pSVar2;
  System_String_o *GKLEODLEPMA;
  System_String_o **ppSVar3;
  
  if ((DAT_045674c2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&KNJPDILMPDG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Clear__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674c2 = 1;
  }
  pSVar2 = (__this->fields).PKCGAKMEKFG;
  if (pSVar2 == (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  GKLEODLEPMA = StringLiteral_1;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (KNJPDILMPDG_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)KNJPDILMPDG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    GKLEODLEPMA = IMMNELPBGIF[1].monitor;
    (__this->fields).DHLCIGNKKPP = (System_String_o *)IMMNELPBGIF[1].klass;
    thunk_FUN_01c20e04(&(__this->fields).DHLCIGNKKPP);
    (__this->fields).FKDKFGIFBIJ = *(bool_conflict *)((long)&IMMNELPBGIF[5].monitor + 1);
    (__this->fields).NMBDHGCKNII =
         (System_Collections_Generic_List_NBLEEDEAPHB__o *)IMMNELPBGIF[2].klass;
    thunk_FUN_01c20e04(&(__this->fields).NMBDHGCKNII);
    (__this->fields).MEELBFGHELO = IMMNELPBGIF[2].monitor;
    thunk_FUN_01c20e04(&(__this->fields).MEELBFGHELO);
    (__this->fields).ECIEHGDKKGO = *(bool_conflict *)&IMMNELPBGIF[5].monitor;
    (__this->fields).BGANBKJCMNM = IMMNELPBGIF[3].monitor;
    thunk_FUN_01c20e04(&(__this->fields).BGANBKJCMNM);
    (__this->fields).PAAKEJMBFFH = *(int32_t *)&IMMNELPBGIF[4].monitor;
    ppSVar3 = &(__this->fields).super.LLBBHINDIDB;
    *ppSVar3 = (System_String_o *)IMMNELPBGIF[4].klass;
    thunk_FUN_01c20e04(ppSVar3);
    (__this->fields).IFBFFFFGLDJ = *(int32_t *)((long)&IMMNELPBGIF[4].monitor + 4);
    (__this->fields).NHNBEPIDGIB = *(bool_conflict *)((long)&IMMNELPBGIF[5].monitor + 2);
    (__this->fields).JADIONKCDCB = *(float *)((long)&IMMNELPBGIF[5].klass + 4);
    if (IMMNELPBGIF[3].klass != (Il2CppClass *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                 (System_Action_T__o *)IMMNELPBGIF[3].klass,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,(__this->fields).BGANBKJCMNM,
             (__this->fields).super.LLBBHINDIDB,0,(MethodInfo *)0x0);
  return;
}

