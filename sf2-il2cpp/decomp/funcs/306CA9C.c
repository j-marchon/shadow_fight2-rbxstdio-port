// GMGALNFPLPA$$KLGJMPDHMKE @ RVA 0x306CA9C

bool GMGALNFPLPA__KLGJMPDHMKE
               (GMGALNFPLPA_o *__this,System_String_o *LFGKEPCBPKF,System_String_o *AAIHDEKMIJG,
               float LFJGFLNMBMC,float NMFKJBOAOLK,float DAPHCPICAAC,int32_t ABKPKINOIKE,
               int32_t KBLGFJOJCLG,float NOOEONBJNJN,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  CocosAnimation_o *pCVar4;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Sprite_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Sprite__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o **ppUVar11;
  CocosAnimation_o **ppCVar12;
  System_Collections_Generic_List_Sprite__o *pSVar13;
  double dVar14;
  double dVar15;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Rect_o UVar17;
  
  if ((DAT_04565f3f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_2964);
    DAT_04565f3f = 1;
  }
  if ((__this->fields).JDNKKGPNHPB != 1) {
    return false;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,LFGKEPCBPKF,(MethodInfo *)0x0);
  ppUVar11 = &(__this->fields).OJJAMKDEMJJ;
  *ppUVar11 = __this_00;
  thunk_FUN_01c20e04(ppUVar11,__this_00);
  if (*ppUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pCVar4 = (CocosAnimation_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (*ppUVar11,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    ppCVar12 = &(__this->fields).AKBKJNNOMOD;
    *ppCVar12 = pCVar4;
    thunk_FUN_01c20e04(ppCVar12,pCVar4);
    pCVar4 = *ppCVar12;
    pSVar5 = System_String__Concat(AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0);
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      bVar3 = CocosAnimation__Init(pCVar4,pSVar5,2,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar5 = System_String__Concat(StringLiteral_2964,AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0)
        ;
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return false;
      }
      if (*ppCVar12 != (CocosAnimation_o *)0x0) {
        CocosAnimation__SetFramesRange(*ppCVar12,ABKPKINOIKE,KBLGFJOJCLG,(MethodInfo *)0x0);
        if (*ppCVar12 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFirstFrame(*ppCVar12,(MethodInfo *)0x0);
          if (*ppCVar12 != (CocosAnimation_o *)0x0) {
            ((*ppCVar12)->fields)._PPEGDOHGLJJ_k__BackingField = LFJGFLNMBMC / 60.0;
            GMGALNFPLPA__IDDKDJOELLP(__this,NOOEONBJNJN,method_00);
            pCVar4 = (__this->fields).AKBKJNNOMOD;
            if (pCVar4 != (CocosAnimation_o *)0x0) {
              (__this->fields).GDIIBOGHNOJ =
                   (float)(pCVar4->fields)._BNKDPKMAPPM_k__BackingField * LFJGFLNMBMC + 1.0;
              pSVar13 = (pCVar4->fields).HKCNDNBLAHI;
              if (pSVar13 != (System_Collections_Generic_List_Sprite__o *)0x0) {
                pSVar8 = pSVar13->klass;
                uVar1._0_1_ = (pSVar8->_2).rank;
                uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
                uVar9 = (ulong)uVar1;
                if (uVar9 != 0) {
                  piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                        (Il2CppClass *)System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo) {
                      pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
                      goto LAB_0316ccf0;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                pVVar6 = (VirtualInvokeData *)
                         FUN_01b81914(pSVar13,
                                      System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo,0);
LAB_0316ccf0:
                pUVar7 = (UnityEngine_Sprite_o *)(*pVVar6->methodPtr)(pSVar13,0,pVVar6->method);
                if (pUVar7 != (UnityEngine_Sprite_o *)0x0) {
                  UVar16 = UnityEngine_Sprite__get_rect(pUVar7,(MethodInfo *)0x0);
                  if ((*ppCVar12 != (CocosAnimation_o *)0x0) &&
                     (pSVar13 = ((*ppCVar12)->fields).HKCNDNBLAHI,
                     pSVar13 != (System_Collections_Generic_List_Sprite__o *)0x0)) {
                    pSVar8 = pSVar13->klass;
                    uVar2._0_1_ = (pSVar8->_2).rank;
                    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
                    uVar9 = (ulong)uVar2;
                    if (uVar9 != 0) {
                      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                            (Il2CppClass *)System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo
                           ) {
                          pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
                          goto LAB_0316cd6c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    pVVar6 = (VirtualInvokeData *)
                             FUN_01b81914(UVar16.fields.m_XMin,UVar16.fields.m_YMin,
                                          UVar16.fields.m_Width,UVar16.fields.m_Height,pSVar13,
                                          System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo,
                                          0);
LAB_0316cd6c:
                    pUVar7 = (UnityEngine_Sprite_o *)(*pVVar6->methodPtr)(pSVar13,0,pVVar6->method);
                    if (pUVar7 != (UnityEngine_Sprite_o *)0x0) {
                      UVar17 = UnityEngine_Sprite__get_rect(pUVar7,(MethodInfo *)0x0);
                      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(UVar17.fields.m_XMin,UVar17.fields.m_YMin,
                                           UVar17.fields.m_Width);
                      }
                      dVar14 = System_Math__Round((double)(NMFKJBOAOLK / UVar16.fields.m_Width),4,1,
                                                  (MethodInfo *)0x0);
                      dVar15 = System_Math__Round((double)(DAPHCPICAAC / UVar17.fields.m_Height),4,1
                                                  ,(MethodInfo *)0x0);
                      if ((*ppUVar11 != (UnityEngine_GameObject_o *)0x0) &&
                         (__this_01 = UnityEngine_GameObject__get_transform
                                                (*ppUVar11,(MethodInfo *)0x0),
                         __this_01 != (UnityEngine_Transform_o *)0x0)) {
                        value.fields.x = (float)dVar14;
                        value.fields.y = (float)dVar15;
                        value.fields.z = 1.0;
                        UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
                        return true;
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

