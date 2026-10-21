// Nekki.SF2.GUI.Profile.ProfileScene$$HDMIBCGPDPL @ RVA 0x3394C0C

void Nekki_SF2_GUI_Profile_ProfileScene__HDMIBCGPDPL
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_01;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar4;
  undefined4 uVar5;
  
  if ((DAT_04567c4a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GetButtonBySection__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Image>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    DAT_04567c4a = 1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    __this_01 = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GetButtonBySection
                          ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,3,
                           Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GetButtonBySection__
                          );
    pNVar3 = (__this->fields)._SealsController;
    if (((pNVar3 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) &&
        (pSVar4 = (pNVar3->fields).BMEJJFBFFIH,
        pSVar4 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) &&
       (__this_01 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_01,0 < (pSVar4->fields)._size,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this_01,
                          Method_UnityEngine_Component_GetComponent<Image>__);
      bVar1 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        uVar5 = 0x3f800000;
        if (!bVar1) {
          uVar5 = 0x3f000000;
        }
                    /* WARNING: Could not recover jumptable at 0x03494cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pIVar2->klass->vtable[0x17].methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,uVar5,pIVar2,pIVar2->klass->vtable[0x17].method)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

