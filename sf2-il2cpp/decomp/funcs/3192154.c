// JFDNJGDAMHJ$$MDHENNNGCEA @ RVA 0x3192154

void JFDNJGDAMHJ__MDHENNNGCEA
               (JFDNJGDAMHJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_Collections_Generic_List_float__o *pSVar7;
  System_Single_array *pSVar8;
  float fVar9;
  
  if ((DAT_04566a49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Clear__);
    FUN_01bab630(&StringLiteral_13972);
    FUN_01bab630(&StringLiteral_7019);
    FUN_01bab630(&StringLiteral_4848);
    FUN_01bab630(&StringLiteral_2790);
    FUN_01bab630(&StringLiteral_6273);
    FUN_01bab630(&StringLiteral_12505);
    FUN_01bab630(&StringLiteral_3572);
    DAT_04566a49 = 1;
  }
  pSVar7 = (__this->fields).PEMHPNLDPHD;
  if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                 (AHDGNOJPPIB,StringLiteral_12505,
                                  (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (plVar3 != (long *)0x0) {
        pSVar7 = (__this->fields).PEMHPNLDPHD;
        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_13972,*(undefined8 *)(*plVar3 + 0x470));
        if (plVar4 != (long *)0x0) {
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<float>_Add__;
            if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
              pSVar8 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pSVar8 != (System_Single_array *)0x0) {
                uVar1 = (pSVar7->fields)._size;
                if (uVar1 < (uint)pSVar8->max_length) {
                  (pSVar7->fields)._size = uVar1 + 1;
                  pSVar8->m_Items[(int)uVar1] = fVar9;
                }
                else {
                  System_Collections_Generic_List<float>__AddWithResize
                            (pSVar7,fVar9,
                             *(MethodInfo_2703A5C **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar7 = (__this->fields).PEMHPNLDPHD;
                plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                           (plVar3,StringLiteral_7019,
                                            *(undefined8 *)(*plVar3 + 0x470));
                if (plVar4 != (long *)0x0) {
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,(__this->fields).NAKOKMPECML,(MethodInfo *)0x0);
                    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                    if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                      pSVar8 = (pSVar7->fields)._items;
                      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                      if (pSVar8 != (System_Single_array *)0x0) {
                        uVar1 = (pSVar7->fields)._size;
                        if (uVar1 < (uint)pSVar8->max_length) {
                          (pSVar7->fields)._size = uVar1 + 1;
                          pSVar8->m_Items[(int)uVar1] = fVar9;
                        }
                        else {
                          System_Collections_Generic_List<float>__AddWithResize
                                    (pSVar7,fVar9,
                                     *(MethodInfo_2703A5C **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar7 = (__this->fields).PEMHPNLDPHD;
                        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                   (plVar3,StringLiteral_3572,
                                                    *(undefined8 *)(*plVar3 + 0x470));
                        if (plVar4 != (long *)0x0) {
                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                   (**(code **)(*plVar4 + 0x238))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,(__this->fields).NAKOKMPECML,
                                                (MethodInfo *)0x0);
                            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                            lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                            if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                              pSVar8 = (pSVar7->fields)._items;
                              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                              if (pSVar8 != (System_Single_array *)0x0) {
                                uVar1 = (pSVar7->fields)._size;
                                if (uVar1 < (uint)pSVar8->max_length) {
                                  (pSVar7->fields)._size = uVar1 + 1;
                                  pSVar8->m_Items[(int)uVar1] = fVar9;
                                }
                                else {
                                  System_Collections_Generic_List<float>__AddWithResize
                                            (pSVar7,fVar9,
                                             *(MethodInfo_2703A5C **)
                                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar7 = (__this->fields).PEMHPNLDPHD;
                                plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                           (plVar3,StringLiteral_2790,
                                                            *(undefined8 *)(*plVar3 + 0x470));
                                if (plVar4 != (long *)0x0) {
                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                           (**(code **)(*plVar4 + 0x238))
                                                     (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar5,(__this->fields).NAKOKMPECML,
                                                        (MethodInfo *)0x0);
                                    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                                    lVar2 = Method_System_Collections_Generic_List<float>_Add__;
                                    if (pSVar7 != (System_Collections_Generic_List_float__o *)0x0) {
                                      pSVar8 = (pSVar7->fields)._items;
                                      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                                      if (pSVar8 != (System_Single_array *)0x0) {
                                        uVar1 = (pSVar7->fields)._size;
                                        if (uVar1 < (uint)pSVar8->max_length) {
                                          (pSVar7->fields)._size = uVar1 + 1;
                                          pSVar8->m_Items[(int)uVar1] = fVar9;
                                        }
                                        else {
                                          System_Collections_Generic_List<float>__AddWithResize
                                                    (pSVar7,fVar9,
                                                     *(MethodInfo_2703A5C **)
                                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        pSVar7 = (__this->fields).PEMHPNLDPHD;
                                        plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                                                                   (plVar3,StringLiteral_4848,
                                                                    *(undefined8 *)(*plVar3 + 0x470)
                                                                   );
                                        if (plVar4 != (long *)0x0) {
                                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(*plVar4 + 0x238))
                                                             (plVar4,*(undefined8 *)
                                                                      (*plVar4 + 0x240));
                                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar5,(__this->fields).NAKOKMPECML,
                                                                (MethodInfo *)0x0);
                                            fVar9 = EIABCPKDEBD__GICIEKCGOHA
                                                              (pSVar6,0.0,(MethodInfo *)0x0);
                                            lVar2 = 
                                            Method_System_Collections_Generic_List<float>_Add__;
                                            if (pSVar7 != (System_Collections_Generic_List_float__o
                                                           *)0x0) {
                                              pSVar8 = (pSVar7->fields)._items;
                                              (pSVar7->fields)._version =
                                                   (pSVar7->fields)._version + 1;
                                              if (pSVar8 != (System_Single_array *)0x0) {
                                                uVar1 = (pSVar7->fields)._size;
                                                if (uVar1 < (uint)pSVar8->max_length) {
                                                  (pSVar7->fields)._size = uVar1 + 1;
                                                  pSVar8->m_Items[(int)uVar1] = fVar9;
                                                }
                                                else {
                                                  System_Collections_Generic_List<float>__AddWithResize
                                                            (pSVar7,fVar9,
                                                             *(MethodInfo_2703A5C **)
                                                              (*(long *)(*(long *)(lVar2 + 0x20) +
                                                                        0xc0) + 0x70));
                                                }
                                                pSVar7 = (__this->fields).PEMHPNLDPHD;
                                                plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                                                           (plVar3,
                                                  StringLiteral_6273,
                                                  *(undefined8 *)(*plVar3 + 0x470));
                                                if (plVar3 != (long *)0x0) {
                                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                           (**(code **)(*plVar3 + 0x238))
                                                                     (plVar3,*(undefined8 *)
                                                                              (*plVar3 + 0x240));
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,(__this->fields).NAKOKMPECML,
                                                             (MethodInfo *)0x0);
                                                  fVar9 = EIABCPKDEBD__GICIEKCGOHA
                                                                    (pSVar6,0.0,(MethodInfo *)0x0);
                                                  lVar2 = 
                                                  Method_System_Collections_Generic_List<float>_Add__
                                                  ;
                                                  if (pSVar7 != (
                                                  System_Collections_Generic_List_float__o *)0x0) {
                                                    pSVar8 = (pSVar7->fields)._items;
                                                    (pSVar7->fields)._version =
                                                         (pSVar7->fields)._version + 1;
                                                    if (pSVar8 != (System_Single_array *)0x0) {
                                                      uVar1 = (pSVar7->fields)._size;
                                                      if (uVar1 < (uint)pSVar8->max_length) {
                                                        (pSVar7->fields)._size = uVar1 + 1;
                                                        pSVar8->m_Items[(int)uVar1] = fVar9;
                                                        return;
                                                      }
                                                                                                            
                                                  System_Collections_Generic_List<float>__AddWithResize
                                                            (pSVar7,fVar9,
                                                             *(MethodInfo_2703A5C **)
                                                              (*(long *)(*(long *)(lVar2 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  return;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

