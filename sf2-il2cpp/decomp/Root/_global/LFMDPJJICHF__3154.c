// TypeDefIndex 3154
// Namespace: 
// public class LFMDPJJICHF
// Fields:

// ===== public static void BBFCCAOAJII(List<IENLNOEDCFF> HPACPFLKHPK, XmlNode OBDMHHJBLKL)  [RVA 0x34D9E14]
// LFMDPJJICHF$$BBFCCAOAJII @ RVA 0x34D9E14

/* WARNING: Removing unreachable block (ram,0x035da108) */

void LFMDPJJICHF__BBFCCAOAJII
               (System_Collections_Generic_List_IENLNOEDCFF__o *HPACPFLKHPK,
               System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  IENLNOEDCFF_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar5;
  IENLNOEDCFF_array *pIVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568704 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_Clear__);
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
        item = LFMDPJJICHF__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)method_00);
        if (item != (IENLNOEDCFF_o *)0x0) {
          (*(item->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                    (item,AHDGNOJPPIB,(item->klass->vtable)._7_HNIHOIAMDPC.method);
          lVar5 = Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__;
          pIVar6 = (HPACPFLKHPK->fields)._items;
          (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
          if (pIVar6 == (IENLNOEDCFF_array *)0x0) {
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


// ===== public static IENLNOEDCFF EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x34DA1D8]
// LFMDPJJICHF$$EOHMFJFFFIN @ RVA 0x34DA1D8

IENLNOEDCFF_o * LFMDPJJICHF__EOHMFJFFFIN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  System_Object_array *args;
  long lVar3;
  System_Collections_Generic_List_IENLNOEDCFF__o *HPACPFLKHPK;
  undefined8 uVar4;
  MethodInfo *in_x2;
  EIEJHJLDGNH_o *__this;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = AHDGNOJPPIB;
  if ((DAT_04568705 & 1) == 0) {
    FUN_01bab630(&ACPDNPJECMD_TypeInfo);
    FUN_01bab630(&AFJEGLNKCHN_TypeInfo);
    FUN_01bab630(&ALIDPKFDNBA_TypeInfo);
    FUN_01bab630(&DCMMOJCGNNK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EFPOGFPCBNE_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&FAFFHLJEDAN_TypeInfo);
    FUN_01bab630(&FJMCMFBLEOE_TypeInfo);
    FUN_01bab630(&FKGDENPCMPH_TypeInfo);
    FUN_01bab630(&GBKCLIFGIFN_TypeInfo);
    FUN_01bab630(&GDINNHKFKMB_TypeInfo);
    FUN_01bab630(&GEGIPFKMLMO_TypeInfo);
    FUN_01bab630(&HEGNACFOHEB_TypeInfo);
    FUN_01bab630(&IENCDFELNPO_TypeInfo);
    FUN_01bab630(&IJIPGGOAGBO_TypeInfo);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&LFDEBALJBHC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
    FUN_01bab630(&NCGOMGGFPJH_TypeInfo);
    FUN_01bab630(&NECMEJDCLHM_TypeInfo);
    FUN_01bab630(&OALOIHHAHAD_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PCGLKFBEGCD_TypeInfo);
    FUN_01bab630(&PHGEMMOPIFJ_TypeInfo);
    FUN_01bab630(&PPABOCBJHCB_TypeInfo);
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
  iVar2 = CMCJGLAABFO__EOGEJOBHJMC(CJNHFNHJHPE,(MethodInfo *)0x0);
  switch(iVar2) {
  case 1:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(NECMEJDCLHM_TypeInfo);
    NECMEJDCLHM___ctor((NECMEJDCLHM_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 2:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(EIEJHJLDGNH_TypeInfo);
    EIEJHJLDGNH___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 3:
  case 10:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(GDINNHKFKMB_TypeInfo);
    GDINNHKFKMB___ctor((GDINNHKFKMB_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 4:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(GBKCLIFGIFN_TypeInfo);
    GBKCLIFGIFN___ctor((GBKCLIFGIFN_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 5:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(FJMCMFBLEOE_TypeInfo);
    FJMCMFBLEOE___ctor((FJMCMFBLEOE_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 6:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(ALIDPKFDNBA_TypeInfo);
    ALIDPKFDNBA___ctor((ALIDPKFDNBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 7:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(NCGOMGGFPJH_TypeInfo);
    NCGOMGGFPJH___ctor((NCGOMGGFPJH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 8:
    HPACPFLKHPK = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
               Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    LFMDPJJICHF__BBFCCAOAJII(HPACPFLKHPK,AHDGNOJPPIB,in_x2);
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(KAFMFFDFDBL_TypeInfo);
    KAFMFFDFDBL___ctor((KAFMFFDFDBL_o *)__this,AHDGNOJPPIB,HPACPFLKHPK,(MethodInfo *)0x0);
    break;
  case 9:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(PCGLKFBEGCD_TypeInfo);
    PCGLKFBEGCD___ctor((PCGLKFBEGCD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xb:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(EFPOGFPCBNE_TypeInfo);
    EFPOGFPCBNE___ctor((EFPOGFPCBNE_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xc:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(PHGEMMOPIFJ_TypeInfo);
    PHGEMMOPIFJ___ctor((PHGEMMOPIFJ_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xd:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(DCMMOJCGNNK_TypeInfo);
    DCMMOJCGNNK___ctor((DCMMOJCGNNK_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xe:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(HEGNACFOHEB_TypeInfo);
    HEGNACFOHEB___ctor((HEGNACFOHEB_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0xf:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(FKGDENPCMPH_TypeInfo);
    FKGDENPCMPH___ctor((FKGDENPCMPH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x10:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(FAFFHLJEDAN_TypeInfo);
    FAFFHLJEDAN___ctor((FAFFHLJEDAN_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x11:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(PPABOCBJHCB_TypeInfo);
    PPABOCBJHCB___ctor((PPABOCBJHCB_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x12:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(LFDEBALJBHC_TypeInfo);
    LFDEBALJBHC___ctor((LFDEBALJBHC_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x13:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(IENCDFELNPO_TypeInfo);
    IENCDFELNPO___ctor((IENCDFELNPO_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x14:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(GEGIPFKMLMO_TypeInfo);
    GEGIPFKMLMO___ctor((GEGIPFKMLMO_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x15:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(NBOACIABNIG_TypeInfo);
    NBOACIABNIG___ctor((NBOACIABNIG_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x16:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(ACPDNPJECMD_TypeInfo);
    ACPDNPJECMD___ctor((ACPDNPJECMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x17:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(IJIPGGOAGBO_TypeInfo);
    IJIPGGOAGBO___ctor((IJIPGGOAGBO_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x18:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(OALOIHHAHAD_TypeInfo);
    OALOIHHAHAD___ctor((OALOIHHAHAD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    break;
  case 0x19:
    __this = (EIEJHJLDGNH_o *)thunk_FUN_01bda818(AFJEGLNKCHN_TypeInfo);
    AFJEGLNKCHN___ctor((AFJEGLNKCHN_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
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
    __this = (EIEJHJLDGNH_o *)0x0;
  }
  return (IENLNOEDCFF_o *)__this;
}


// ===== public void .ctor()  [RVA 0x34DA7D0]
// LFMDPJJICHF$$.ctor @ RVA 0x34DA7D0

void LFMDPJJICHF___ctor(LFMDPJJICHF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

