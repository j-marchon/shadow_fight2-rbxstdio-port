// NLPJLHOEAOE$$LHOFBEBHPDE @ RVA 0x3207E14

bool NLPJLHOEAOE__LHOFBEBHPDE(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t NFIGEAOPJKM;
  System_Xml_XmlDocument_o *pSVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  NLPJLHOEAOE_c *method_00;
  NLPJLHOEAOE_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlNode_o *pSVar6;
  MethodInfo *in_x3;
  int iVar7;
  
  if ((DAT_04566e3d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_11703);
    FUN_01bab630(&StringLiteral_12434);
    DAT_04566e3d = 1;
  }
  pSVar2 = (__this->fields).OFIPPHJGMNK;
  if (pSVar2 != (System_Xml_XmlDocument_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_11416,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                 (plVar3,StringLiteral_14862,*(undefined8 *)(*plVar3 + 0x470));
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (plVar4 != (long *)0x0) {
          iVar7 = 0;
          do {
            iVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            if (iVar1 <= iVar7) {
LAB_03307fe0:
              return iVar7 < iVar1;
            }
            plVar4 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210))
            ;
            if (plVar4 == (long *)0x0) break;
            lVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,iVar7,*(undefined8 *)(*plVar4 + 0x1d0));
            if (lVar5 != 0) {
              method_00 = NLPJLHOEAOE_TypeInfo;
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                method_00 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
              }
              __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)method_00);
              plVar4 = (long *)(**(code **)(*plVar3 + 0x208))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x210));
              if (plVar4 == (long *)0x0) break;
              plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                         (plVar4,iVar7,*(undefined8 *)(*plVar4 + 0x1d0));
              if (plVar4 == (long *)0x0) break;
              __this_01 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
              if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) break;
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_01,StringLiteral_11703,(MethodInfo *)0x0);
              NFIGEAOPJKM = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
              if (__this_00 == (NLPJLHOEAOE_o *)0x0) break;
              pSVar6 = NLPJLHOEAOE__PPPIEOEMMKL(__this_00,NFIGEAOPJKM,StringLiteral_12434,in_x3);
              if (pSVar6 != (System_Xml_XmlNode_o *)0x0) goto LAB_03307fe0;
            }
            iVar7 = iVar7 + 1;
            plVar4 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210))
            ;
          } while (plVar4 != (long *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

