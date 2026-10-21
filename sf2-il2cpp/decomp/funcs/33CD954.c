// GHOPMMBKGMB$$IKGFPIFAGHP @ RVA 0x33CD954

/* WARNING: Removing unreachable block (ram,0x034cdca4) */

void GHOPMMBKGMB__IKGFPIFAGHP
               (GHOPMMBKGMB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  GLDKIFOLMAO_o *__this_01;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567e38 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3852);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3853);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_GLDKIFOLMAO>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Clear__);
    FUN_01bab630(&GLDKIFOLMAO_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567e38 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HGCIIJGGNKN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Clear__);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3852,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3853,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                                 (JHMENEKPIBO,pSVar2,
                                  (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
      if (plVar3 == (long *)0x0) {
        return;
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_034cdb28;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cdb28:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) == 0) {
            plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_034cdc48;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_034cdc30;
          }
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_034cdb88;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cdb88:
          JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          __this_01 = (GLDKIFOLMAO_o *)thunk_FUN_01bda818(GLDKIFOLMAO_TypeInfo);
          if (JHMENEKPIBO_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO_00);
            }
          }
          GLDKIFOLMAO___ctor(__this_01,JHMENEKPIBO_00,(MethodInfo *)0x0);
          if (__this_01 == (GLDKIFOLMAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          CAOJHCDPDBH__GKONJMIPMEH<object,_object>
                    ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).HGCIIJGGNKN,
                     (Il2CppObject *)(__this_01->fields)._CIEBCKIBJHL_k__BackingField,
                     (Il2CppObject *)__this_01,Method_CAOJHCDPDBH_GKONJMIPMEH<string,_GLDKIFOLMAO>__
                    );
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_034cdc30:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034cdc64;
    }
  }
LAB_034cdc48:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034cdc64:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

