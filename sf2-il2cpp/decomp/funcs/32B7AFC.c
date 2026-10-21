// Nekki.SF2.GUI.Map.IRaidKeysView$$GNMFDGIDOKJ @ RVA 0x32B7AFC

void Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ
               (UnityEngine_GameObject_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  int index;
  
  if ((ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    index = 0;
    do {
      iVar1 = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
      if (iVar1 <= index) {
        return;
      }
      pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) break;
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      index = index + 1;
      pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
    } while (pUVar2 != (UnityEngine_Transform_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

