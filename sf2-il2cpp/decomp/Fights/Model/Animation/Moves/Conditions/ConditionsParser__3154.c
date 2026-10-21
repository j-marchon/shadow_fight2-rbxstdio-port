// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionsParser  (obfuscated LFMDPJJICHF)
// TypeDefIndex 3154
// Namespace: 
// public class ConditionsParser
// Fields:

// ===== public static void BBFCCAOAJII(List<ConditionAnimation> HPACPFLKHPK, XmlNode OBDMHHJBLKL)  [RVA 0x34D9E14]
// ConditionsParser$$BBFCCAOAJII @ RVA 0x34D9E14

/* WARNING: Removing unreachable block (ram,0x035da108) */

void ConditionsParser__BBFCCAOAJII
               (System_Collections_Generic_List_IENLNOEDCFF__o *HPACPFLKHPK,
               System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  ConditionAnimation_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar5;
  ConditionAnimation_array *pIVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568704 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568704 = 1;
  }
  if (HPACPFLKHPK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    length = (HPACPFLKHPK->fields)._size;
    (HPACPFLKHPK->fields)._size = 0;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(HPACPFLKHPK->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    if ((OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (OBDMHHJBLKL,
                                    (OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_035d9f44;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_035d9f44:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 == 0) goto LAB_035da0b0;
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_035da098;
        }
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_035d9fa4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_035d9fa4:
        auVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        AHDGNOJPPIB = auVar9._0_8_;
        method_00 = auVar9._8_8_;
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             (method_00 = System_Xml_XmlNode_TypeInfo,
             (AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB);
          }
        }
        item = ConditionsParser__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)method_00);
        if (item != (ConditionAnimation_o *)0x0) {
          (*(item->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                    (item,AHDGNOJPPIB,(item->klass->vtable)._7_HNIHOIAMDPC.method);
          lVar5 = Method_System_Collections_Generic_List<ConditionAnimation>_Add__;
          pIVar6 = (HPACPFLKHPK->fields)._items;
          (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
          if (pIVar6 == (ConditionAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (HPACPFLKHPK->fields)._size;
          if (uVar2 < (uint)pIVar6->max_length) {
            (HPACPFLKHPK->fields)._size = uVar2 + 1;
            pIVar6->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_035da098:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_035da0cc;
    }
  }
LAB_035da0b0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035da0cc:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public static ConditionAnimation EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x34DA1D8]
// ConditionsParser$$EOHMFJFFFIN @ RVA 0x34DA1D8

ConditionAnimation_o * ConditionsParser__EOHMFJFFFIN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  System_Object_array *args;
  long lVar3;
  System_Collections_Generic_List_IENLNOEDCFF__o *HPACPFLKHPK;
  undefined8 uVar4;
  MethodInfo *in_x2;
  ConditionDistance_o *__this;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = AHDGNOJPPIB;
  if ((DAT_04568705 & 1) == 0) {
    FUN_01bab630(&ConditionBattleType_TypeInfo);
    FUN_01bab630(&ConditionModelExists_TypeInfo);
    FUN_01bab630(&ConditionPlayer_TypeInfo);
    FUN_01bab630(&ConditionItemInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ConditionPhysics_TypeInfo);
    FUN_01bab630(&ConditionDistance_TypeInfo);
    FUN_01bab630(&ConditionBirth_TypeInfo);
    FUN_01bab630(&ConditionWeapon_TypeInfo);
    FUN_01bab630(&ConditionPerk_TypeInfo);
    FUN_01bab630(&ConditionKeys_TypeInfo);
    FUN_01bab630(&ConditionCurrentAnimation_TypeInfo);
    FUN_01bab630(&ConditionModExists_TypeInfo);
    FUN_01bab630(&ConditionBullets_TypeInfo);
    FUN_01bab630(&ConditionModelMirrored_TypeInfo);
    FUN_01bab630(&ConditionBossAbilityState_TypeInfo);
    FUN_01bab630(&ConditionList_TypeInfo);
    FUN_01bab630(&ConditionScene_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    FUN_01bab630(&ConditionDirection_TypeInfo);
    FUN_01bab630(&ConditionHealth_TypeInfo);
    FUN_01bab630(&ConditionRound_TypeInfo);
    FUN_01bab630(&ConditionHit_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&ConditionInterval_TypeInfo);
    FUN_01bab630(&ConditionRoundResult_TypeInfo);
    FUN_01bab630(&ConditionName_TypeInfo);
    auVar5 = FUN_01bab630(&StringLiteral_5568/*"ERROR: ConditionsParser - no condition for "{0}""*/);
    DAT_04568705 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_035da7bc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
  }
  CJNHFNHJHPE = (System_String_o *)
                (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
  iVar2 = MovesMaps__EOGEJOBHJMC(CJNHFNHJHPE,(MethodInfo *)0x0);
  switch(iVar2) {
  case 1:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionRound_TypeInfo);
    ConditionRound___ctor((ConditionRound_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 2:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionDistance_TypeInfo);
    ConditionDistance___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 3:
  case 10:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionCurrentAnimation_TypeInfo);
    ConditionCurrentAnimation___ctor((ConditionCurrentAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 4:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionKeys_TypeInfo);
    ConditionKeys___ctor((ConditionKeys_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 5:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionWeapon_TypeInfo);
    ConditionWeapon___ctor((ConditionWeapon_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 6:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionPlayer_TypeInfo);
    ConditionPlayer___ctor((ConditionPlayer_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 7:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionHealth_TypeInfo);
    ConditionHealth___ctor((ConditionHealth_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 8:
    HPACPFLKHPK = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
               Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    ConditionsParser__BBFCCAOAJII(HPACPFLKHPK,AHDGNOJPPIB,in_x2);
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionList_TypeInfo);
    ConditionList___ctor((ConditionList_o *)__this,AHDGNOJPPIB,HPACPFLKHPK,(MethodInfo *)0x0);
    break;
  case 9:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionInterval_TypeInfo);
    ConditionInterval___ctor((ConditionInterval_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xb:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionPhysics_TypeInfo);
    ConditionPhysics___ctor((ConditionPhysics_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xc:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionRoundResult_TypeInfo);
    ConditionRoundResult___ctor((ConditionRoundResult_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xd:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionItemInfo_TypeInfo);
    ConditionItemInfo___ctor((ConditionItemInfo_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xe:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionBullets_TypeInfo);
    ConditionBullets___ctor((ConditionBullets_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xf:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionPerk_TypeInfo);
    ConditionPerk___ctor((ConditionPerk_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x10:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionBirth_TypeInfo);
    ConditionBirth___ctor((ConditionBirth_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x11:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionName_TypeInfo);
    ConditionName___ctor((ConditionName_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x12:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionScene_TypeInfo);
    ConditionScene___ctor((ConditionScene_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x13:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionModelMirrored_TypeInfo);
    ConditionModelMirrored___ctor((ConditionModelMirrored_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x14:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionModExists_TypeInfo);
    ConditionModExists___ctor((ConditionModExists_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x15:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionDirection_TypeInfo);
    ConditionDirection___ctor((ConditionDirection_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x16:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionBattleType_TypeInfo);
    ConditionBattleType___ctor((ConditionBattleType_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x17:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionBossAbilityState_TypeInfo);
    ConditionBossAbilityState___ctor((ConditionBossAbilityState_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x18:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionHit_TypeInfo);
    ConditionHit___ctor((ConditionHit_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x19:
    __this = (ConditionDistance_o *)thunk_FUN_01bda818(ConditionModelExists_TypeInfo);
    ConditionModelExists___ctor((ConditionModelExists_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  default:
    auVar5 = FUN_01bab718(object___TypeInfo,1);
    args = auVar5._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar5._8_8_;
    auVar5 = auVar1 << 0x40;
    if (args == (System_Object_array *)0x0) goto LAB_035da7bc;
    if ((CJNHFNHJHPE != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(CJNHFNHJHPE,(((args->obj).klass)->_1).element_class), lVar3 == 0)
       ) {
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)CJNHFNHJHPE;
    thunk_FUN_01c20e04(args->m_Items,CJNHFNHJHPE);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5568/*"ERROR: ConditionsParser - no condition for "{0}""*/,args,(MethodInfo *)0x0);
    __this = (ConditionDistance_o *)0x0;
  }
  return (ConditionAnimation_o *)__this;
}


// ===== public void .ctor()  [RVA 0x34DA7D0]
// ConditionsParser$$.ctor @ RVA 0x34DA7D0

void ConditionsParser___ctor(ConditionsParser_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

