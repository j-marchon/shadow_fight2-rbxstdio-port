// Nekki.SF2.GUI.Map.ZoneScrollItem$$ChooseClosestBattle @ RVA 0x3347770

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_BattleButton__o *__this_01;
  UnityEngine_Object_o *__this_02;
  OOMHDDBCBJP_o *pOVar3;
  UnityEngine_Object_o *x;
  int index;
  double dVar4;
  double dVar5;
  undefined8 in_d1;
  undefined4 uVar6;
  double dVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  uVar6 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_045679d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d7 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((__this_00 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      __this_01 = (__this->fields).PGCBEJGMIMA;
      if (__this_01 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
        index = (__this_01->fields)._size + -1;
        if (index < 0) {
          x = (UnityEngine_Object_o *)0x0;
LAB_03447920:
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          pOVar3 = (OOMHDDBCBJP_o *)0x0;
          if (bVar1) {
            if (x == (UnityEngine_Object_o *)0x0) goto LAB_0344797c;
            pOVar3 = (OOMHDDBCBJP_o *)x[0x12].fields.m_CachedPtr;
          }
          return pOVar3;
        }
        dVar7 = 2147483647.0;
        x = (UnityEngine_Object_o *)0x0;
        do {
          __this_02 = (UnityEngine_Object_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 Method_System_Collections_Generic_List<BattleButton>_get_Item__);
          if ((__this_02 == (UnityEngine_Object_o *)0x0) ||
             (pOVar3 = (OOMHDDBCBJP_o *)
                       ((UnityEngine_Object_Fields *)&__this_02[0x12].fields.m_CachedPtr)->
                       m_CachedPtr, pOVar3 == (OOMHDDBCBJP_o *)0x0)) break;
          if (((pOVar3->fields).HHDBIGKBMEC != false) &&
             (bVar1 = OOMHDDBCBJP__EFLKILFFJKH(pOVar3,(MethodInfo *)0x0), !bVar1)) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
            UVar10 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
            UVar11 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UVar11.fields.x,CONCAT44(uVar6,UVar11.fields.y),UVar11.fields.z);
            }
            dVar4 = System_Math__Pow((double)(UVar10.fields.x - UVar8.fields.x),2.0,
                                     (MethodInfo *)0x0);
            uVar6 = 0x40000000;
            dVar5 = System_Math__Pow((double)(UVar11.fields.y - UVar9.fields.y),2.0,
                                     (MethodInfo *)0x0);
            if (dVar4 + dVar5 < dVar7) {
              x = __this_02;
              dVar7 = dVar4 + dVar5;
            }
          }
          index = index + -1;
          if (index < 0) goto LAB_03447920;
          __this_01 = (__this->fields).PGCBEJGMIMA;
        } while (__this_01 != (System_Collections_Generic_List_BattleButton__o *)0x0);
      }
    }
  }
LAB_0344797c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

