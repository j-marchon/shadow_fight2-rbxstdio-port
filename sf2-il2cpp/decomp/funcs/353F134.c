// Nekki.SF2.GUI.Profile.PerkCell$$GJAELBNACIK @ RVA 0x353F134

void Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,
               System_Collections_Generic_List_JLGNBOILFLN__o *GJBLBEALOBO,MethodInfo *method)

{
  bool bVar1;
  JLGNBOILFLN_o *pJVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar4;
  
  if ((DAT_04568ae7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568ae7 = 1;
  }
  if (GJBLBEALOBO != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    pNVar4 = (__this->fields)._LeftSubItem;
    pJVar2 = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      Nekki_SF2_GUI_Profile_PerkSubItem__Init(pNVar4,pJVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._RightSubItem;
      if ((pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,1 < (GJBLBEALOBO->fields)._size,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._LeftSubItem;
        if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
          (pNVar4->fields)._Position = 1;
          pNVar4 = (__this->fields)._RightSubItem;
          if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
            (pNVar4->fields)._Position = 0;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (!bVar1) {
                return;
              }
              pNVar4 = (__this->fields)._RightSubItem;
              pJVar2 = (JLGNBOILFLN_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,1,
                                  Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
              if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                Nekki_SF2_GUI_Profile_PerkSubItem__Init(pNVar4,pJVar2,(MethodInfo *)0x0);
                pNVar4 = (__this->fields)._LeftSubItem;
                if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                  (pNVar4->fields)._Position = 2;
                  pNVar4 = (__this->fields)._RightSubItem;
                  if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    (pNVar4->fields)._Position = 3;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

