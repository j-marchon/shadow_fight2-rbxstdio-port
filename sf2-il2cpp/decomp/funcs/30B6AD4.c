// Nekki.SF2.GUI.TextPic$$AMMHDMOMDIM @ RVA 0x30B6AD4

void Nekki_SF2_GUI_TextPic__AMMHDMOMDIM
               (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_UI_VertexHelper_o *BKAFIEMJJGM,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_object__o *__this_00;
  IHIFNKAMALG_o *__this_01;
  System_Action_o *pSVar2;
  Il2CppObject *pIVar3;
  uint OGPGLGPMEPD;
  uint uVar4;
  
  if ((DAT_0456620c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    DAT_0456620c = 1;
  }
  if (BKAFIEMJJGM != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BKAFIEMJJGM,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NFECDKAEFJL;
    if ((pSVar2 != (System_Action_o *)0x0) &&
       (pIVar3 = (pSVar2->fields).super.super.m_target, pIVar3 != (Il2CppObject *)0x0)) {
      uVar1 = *(uint *)&pIVar3[1].monitor;
      if ((int)uVar1 < 1) {
        return;
      }
      OGPGLGPMEPD = 0;
      uVar4 = 1;
      do {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    (pSVar2->fields).super.super.m_target;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
        __this_01 = (IHIFNKAMALG_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (__this_00,uVar4 - 1,
                               Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_TypeInfo);
        }
        if (__this_01 == (IHIFNKAMALG_o *)0x0) break;
        IHIFNKAMALG__MGFGGIPGFNJ
                  (__this_01,Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE,OGPGLGPMEPD,
                   (MethodInfo *)0x0);
        if (OGPGLGPMEPD == 3) {
          if ((Nekki_SF2_GUI_TextPic_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_UI_VertexHelper__AddUIVertexQuad
                    (BKAFIEMJJGM,Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE,
                     (MethodInfo *)0x0);
        }
        if (uVar1 == uVar4) {
          return;
        }
        pSVar2 = (__this->fields).NFECDKAEFJL;
        OGPGLGPMEPD = uVar4 & 3;
        uVar4 = uVar4 + 1;
      } while (pSVar2 != (System_Action_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

