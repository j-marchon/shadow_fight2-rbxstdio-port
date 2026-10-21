// Nekki.SF2.Core.Quests.QuestsManager$$ClearActions @ RVA 0x33068C8

void Nekki_SF2_Core_Quests_QuestsManager__ClearActions
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567761 & 1) == 0) {
                    /* try { // try from 034068ec to 03506a0f has its CatchHandler @ 034068ec
                       catch() { ... } // from try @ 034068ec with catch @ 034068ec
                       catch() { ... } // from try @ 03406a60 with catch @ 034068ec
                       catch() { ... } // from try @ 03406a88 with catch @ 034068ec
                       catch() { ... } // from try @ 03406ab8 with catch @ 034068ec
                       catch() { ... } // from try @ 03406ae8 with catch @ 034068ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567761 = 1;
  }
  (__this->fields).HFOJKJFILDB = false;
  (__this->fields)._isRunActions = false;
  ppSVar4 = &(__this->fields).CurrentQuestName;
  *ppSVar4 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar4);
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields)._questsInQueue;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

