// Nekki.SF2.GUI.Map.ZoneScrollItem$$HONFCKEHAGD @ RVA 0x334866C

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__HONFCKEHAGD
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,
          UnityEngine_Vector2_o FAGFGDBOLDP,MethodInfo *method)

{
  bool bVar1;
  int32_t layerMask;
  Nekki_SF2_GUI_Map_BattleButton_o *MOIPALCHOPH;
  UnityEngine_Behaviour_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CircleCollider2D_o *__this_01;
  System_String_array *layerNames;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_02;
  Nekki_SF2_GUI_Map_BattleButton_o *x;
  OOMHDDBCBJP_o *pOVar3;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_RaycastHit2D_o local_e0;
  UnityEngine_RaycastHit2D_o local_b8;
  UnityEngine_Vector2_Fields local_90;
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  float fStack_78;
  float fStack_74;
  int32_t local_70;
  
  if ((DAT_045679dc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Physics2D_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3432);
    DAT_045679dc = 1;
  }
  MOIPALCHOPH = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,ODPEIFGHKNG,method);
  if ((MOIPALCHOPH != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = (UnityEngine_Behaviour_o *)(MOIPALCHOPH->fields)._Collider,
     pUVar2 != (UnityEngine_Behaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)MOIPALCHOPH,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      __this_01 = (MOIPALCHOPH->fields)._Collider;
      if (__this_01 != (UnityEngine_CircleCollider2D_o *)0x0) {
        fVar4 = UnityEngine_CircleCollider2D__get_radius(__this_01,(MethodInfo *)0x0);
        layerNames = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
        if (layerNames != (System_String_array *)0x0) {
          if ((int)layerNames->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          layerNames->m_Items[0] = StringLiteral_3432;
          thunk_FUN_01c20e04();
          layerMask = UnityEngine_LayerMask__GetMask(layerNames,(MethodInfo *)0x0);
          if ((UnityEngine_Physics2D_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Physics2D_TypeInfo);
          }
          UnityEngine_Physics2D__CircleCast
                    (&local_b8,(UnityEngine_Vector2_o)UVar5.fields._0_8_,fVar4 * 0.3,FAGFGDBOLDP,
                     5000.0,layerMask,(MethodInfo *)0x0);
          UStack_88 = local_b8.fields.m_Point.fields;
          local_90 = local_b8.fields.m_Centroid.fields;
          fStack_78 = local_b8.fields.m_Distance;
          fStack_74 = local_b8.fields.m_Fraction;
          UStack_80 = local_b8.fields.m_Normal.fields;
          local_70 = local_b8.fields.m_Collider;
          pUVar2 = (UnityEngine_Behaviour_o *)(MOIPALCHOPH->fields)._Collider;
          if (pUVar2 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(pUVar2,true,(MethodInfo *)0x0);
            local_e0.fields.m_Point.fields = UStack_88;
            local_e0.fields.m_Centroid.fields = local_90;
            local_e0.fields.m_Distance = fStack_78;
            local_e0.fields.m_Fraction = fStack_74;
            local_e0.fields.m_Normal.fields = UStack_80;
            local_e0.fields.m_Collider = local_70;
            x = Nekki_SF2_GUI_Map_ZoneScrollItem__JJBHJFAOOBN(__this_02,&local_e0,ODPEIFGHKNG,in_x3)
            ;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            method_00 = (MethodInfo *)0x0;
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              x = Nekki_SF2_GUI_Map_ZoneScrollItem__PNNGGAEAEIE
                            (__this,MOIPALCHOPH,FAGFGDBOLDP,method_00);
            }
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              Nekki_SF2_GUI_Map_BattleButton__Shake(MOIPALCHOPH,FAGFGDBOLDP,(MethodInfo *)0x0);
              pOVar3 = (OOMHDDBCBJP_o *)0x0;
            }
            else {
              if (x == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_034488cc;
              pOVar3 = (x->fields).CLMFOMEABFA;
            }
            return pOVar3;
          }
        }
      }
    }
  }
LAB_034488cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

