// Nekki.SF2.GUI.Map.MapButton$$Refresh @ RVA 0x34A0B9C

void Nekki_SF2_GUI_Map_MapButton__Refresh(Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  FKNCNNOOOIO_o *pFVar2;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar3;
  System_String_o **ppSVar4;
  System_String_o *value;
  
  pNVar3 = (__this->fields)._TutorialNode;
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pFVar2 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar2 != (FKNCNNOOOIO_o *)0x0) && (__this_00 != (UnityEngine_Object_o *)0x0)) {
    value = (pFVar2->fields).JIJLBFGKNJK;
    UnityEngine_Object__set_name(__this_00,value,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
      ppSVar4 = &(pNVar3->fields)._ID;
      *ppSVar4 = value;
      thunk_FUN_01c20e04(ppSVar4,value);
      pFVar2 = (__this->fields).AEPNEAIEKOL;
      if (pFVar2 != (FKNCNNOOOIO_o *)0x0) {
        iVar1 = (pFVar2->fields).ACNLHENNKAJ;
        if ((__this->fields)._Control != iVar1) {
          (__this->fields)._Control = iVar1;
        }
        Nekki_SF2_GUI_Map_MapButton__DNIJFEPCHFA(__this,method_00);
        Nekki_SF2_GUI_Map_MapButton__MPHBBKIMAFB(__this,method_01);
        Nekki_SF2_GUI_Map_MapButton__AONGGAOEBJM(__this,method_02);
        Nekki_SF2_GUI_Map_MapButton__RefreshIndicator(__this,method_03);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

