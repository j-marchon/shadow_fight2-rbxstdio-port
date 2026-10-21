// Nekki.SF2.GUI.Profile.PerkContent$$Update @ RVA 0x32971D4

void Nekki_SF2_GUI_Profile_PerkContent__Update
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  JLGNBOILFLN_o *pJVar3;
  
  if ((DAT_04567370 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567370 = 1;
  }
  pJVar3 = (__this->fields).OFLJEENFLDG;
  if (pJVar3 != (JLGNBOILFLN_o *)0x0) {
    if ((pJVar3->fields).OIKLOAGFFGO - 1U < 3) {
      bVar1 = true;
    }
    else {
      bVar1 = (__this->fields).PABIMIFJJKF != false;
    }
    __this_00 = (__this->fields)._ImproveButton;
    if (__this_00 != (LabelButton_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = false;
      }
      else {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
            (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_033972b0;
        bVar1 = Nekki_SF2_GUI_Profile_ProfileScene__CanStartImprovePerk
                          ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                           (MethodInfo *)0x0);
      }
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_033972b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

