// Nekki.SF2.GUI.TextPic$$KHKPMMKDLAM @ RVA 0x30B5B44

bool Nekki_SF2_GUI_TextPic__KHKPMMKDLAM
               (Nekki_SF2_GUI_TextPic_o *__this,int32_t AMEHENBCENL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_045661fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    DAT_045661fc = 1;
  }
  pSVar3 = (__this->fields).NFECDKAEFJL;
                    /* try { // try from 031b5b90 to 032b5bb7 has its CatchHandler @ 031b5e94 */
  if (((pSVar3 != (System_Action_o *)0x0) &&
      (__this_00 = (System_Collections_Generic_List_object__o *)
                   (pSVar3->fields).super.super.invoke_impl,
      __this_00 != (System_Collections_Generic_List_object__o *)0x0)) &&
     (pIVar2 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,AMEHENBCENL,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     pIVar2 != (Il2CppObject *)0x0)) {
    if (*(char *)((long)&pIVar2[1].monitor + 6) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)((long)&pIVar2[1].monitor + 4) == '\0';
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

