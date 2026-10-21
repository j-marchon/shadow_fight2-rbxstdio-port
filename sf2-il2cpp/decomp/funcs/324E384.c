// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$FDIGBCFEHLG @ RVA 0x324E384

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__FDIGBCFEHLG
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if ((DAT_0456711f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    DAT_0456711f = 1;
  }
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    pUVar2 = (UnityEngine_Component_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,
                        (__this->fields).FFPCEMDJGIK,
                        Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    if ((pUVar2 != (UnityEngine_Component_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).menuList;
      if ((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
         ((pUVar2 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,
                               (__this->fields).AIAODGKGPEI,
                               Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
          pUVar2 != (UnityEngine_Component_o *)0x0 &&
          (pUVar3 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_GameObject_o *)0x0)))) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

