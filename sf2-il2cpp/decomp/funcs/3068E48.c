// Nekki.SF2.Core.Fights.Controls.Stick$$HCJBFHKPODJ @ RVA 0x3068E48

void Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,bool IDJLHDACOBK,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields)._normalController;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,!IDJLHDACOBK,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._selectedController;
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,IDJLHDACOBK,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._normalTexture;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,!IDJLHDACOBK,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._selectedTexture;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,IDJLHDACOBK,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

