// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GBHBDMMKPLO @ RVA 0x30F7778

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,
               System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE,MethodInfo *method)

{
  int iVar1;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  int index;
  
                    /* catch() { ... } // from try @ 031f7774 with catch @ 031f7784 */
                    /* try { // try from 031f778c to 032f77c7 has its CatchHandler @ 031f77dc */
  if ((DAT_0456646a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 031f77c8 to 032f77d3 has its CatchHandler @ 031f7204 */
    FUN_01bab630(&StringLiteral_15859);
                    /* try { // try from 031f77d4 to 032f77db has its CatchHandler @ 031f77dc */
    DAT_0456646a = 1;
  }
                    /* catch() { ... } // from try @ 031f7754 with catch @ 031f77dc
                       catch() { ... } // from try @ 031f778c with catch @ 031f77dc
                       catch() { ... } // from try @ 031f77d4 with catch @ 031f77dc */
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar1 = (IJIPABLCAKE->fields)._size;
    if (iVar1 < 1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_031f7894;
    }
    else {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,index,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if ((pIVar2 == (Il2CppObject *)0x0) || (__this_00 == (System_Text_StringBuilder_o *)0x0))
        goto LAB_031f7894;
        System_Text_StringBuilder__AppendFormat
                  (__this_00,StringLiteral_15859,pIVar2[1].monitor,(MethodInfo *)0x0);
        index = index + 1;
      } while (iVar1 != index);
    }
    pSVar3 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__TrimEnd(pSVar3,10,(MethodInfo *)0x0);
      ppSVar4 = &(__this->fields).PMHMOJGEAAN;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      return;
    }
  }
LAB_031f7894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

