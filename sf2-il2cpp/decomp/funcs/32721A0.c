// Nekki.SF2.GUI.StrikeThroughTextLine$$Destroy @ RVA 0x32721A0

void Nekki_SF2_GUI_StrikeThroughTextLine__Destroy
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

