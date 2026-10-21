// ACHLOMELAJE$$GNENFJNEJIJ @ RVA 0x305C504

void ACHLOMELAJE__GNENFJNEJIJ
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Xml_XmlNode_o *pSVar5;
  long lVar6;
  System_Xml_XmlElement_o *pSVar7;
  System_String_array *pSVar8;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  int index;
  
  if ((DAT_04565e98 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9951);
    FUN_01bab630(&StringLiteral_13922);
    DAT_04565e98 = 1;
  }
  pSVar3 = (__this->fields).MPBEGAIIEAC;
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar2 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,
                       (Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_List<string>_Contains__);
    lVar6 = Method_System_Collections_Generic_List<string>_Add__;
    if (bVar2) {
      return;
    }
    pSVar3 = (__this->fields).MPBEGAIIEAC;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar8 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pSVar8 != (System_String_array *)0x0) {
        uVar1 = (pSVar3->fields)._size;
        if (uVar1 < (uint)pSVar8->max_length) {
          (pSVar3->fields)._size = uVar1 + 1;
          pSVar8->m_Items[(int)uVar1] = KGLJICLJHEL;
          thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,KGLJICLJHEL);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KGLJICLJHEL
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565f31 == '\0') {
          FUN_01bab630(&LDHBHPILNMA_TypeInfo);
          DAT_04565f31 = '\x01';
        }
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
        if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
          if (0 < (__this_00->fields)._size) {
            index = 0;
            do {
              pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,index,
                                  Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0315c7b4;
              bVar2 = System_String__op_Equality(pIVar4[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
              if (bVar2) {
                pIVar4 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_00,index,
                                    Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
                if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0315c7b4;
                *(undefined1 *)((long)&pIVar4[3].klass + 4) = 1;
                break;
              }
              index = index + 1;
            } while (index < (__this_00->fields)._size);
          }
          if (!BGLBPHDOCGK) {
            return;
          }
          pSVar5 = (__this->fields).super.HJKLIDCAEOE;
          if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
            lVar6 = (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar5,StringLiteral_9951,(pSVar5->klass->vtable)._51_get_Item.method
                              );
            pSVar5 = (__this->fields).super.HJKLIDCAEOE;
            if (lVar6 == 0) {
              pSVar7 = EIABCPKDEBD__BHPIHHJHELJ(pSVar5,StringLiteral_9951,(MethodInfo *)0x0);
            }
            else {
              if (pSVar5 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315c7b4;
              pSVar7 = (System_Xml_XmlElement_o *)
                       (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar5,StringLiteral_9951,
                                  (pSVar5->klass->vtable)._51_get_Item.method);
            }
            pSVar7 = EIABCPKDEBD__BHPIHHJHELJ
                               ((System_Xml_XmlNode_o *)pSVar7,StringLiteral_13922,(MethodInfo *)0x0
                               );
            if (pSVar7 != (System_Xml_XmlElement_o *)0x0) {
              (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar7,StringLiteral_9327,KGLJICLJHEL,
                         (pSVar7->klass->vtable)._66_SetAttribute.method);
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0315c7b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

