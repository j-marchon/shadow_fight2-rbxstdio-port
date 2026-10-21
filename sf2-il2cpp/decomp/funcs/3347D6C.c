// Nekki.SF2.GUI.Map.ZoneScrollItem$$GIJLHPDBFEK @ RVA 0x3347D6C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GIJLHPDBFEK
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((DAT_045679d9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattleButton>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d9 = 1;
  }
  pUVar2 = (__this->fields).BattleBtnPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar2 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar2,Method_UnityEngine_GameObject_GetComponent<BattleButton>__),
      __this_00 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0)) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Map_BattleButton__Init(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
        if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03447e98;
        Nekki_SF2_GUI_Map_BattleButton__SetAlias
                  (__this_00,(BANHBMINMMP->fields).FHPNAJENHNG,(MethodInfo *)0x0);
      }
      return __this_00;
    }
  }
LAB_03447e98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

