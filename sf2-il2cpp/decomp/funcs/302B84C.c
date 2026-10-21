// Nekki.SF2.GUI.SimpleScroll$$EPFNMJMKCMO @ RVA 0x302B84C

void Nekki_SF2_GUI_SimpleScroll__EPFNMJMKCMO
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Transform_o *LJNNKKMHFGO,
               UnityEngine_Transform_o *PCGLODOMIMD,bool GJOPPHLHPMO,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  if ((LJNNKKMHFGO != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)LJNNKKMHFGO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    iVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar2,(MethodInfo *)0x0);
    if ((PCGLODOMIMD != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)PCGLODOMIMD,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetSiblingIndex
                (pUVar2,iVar1 - (~(uint)GJOPPHLHPMO & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

