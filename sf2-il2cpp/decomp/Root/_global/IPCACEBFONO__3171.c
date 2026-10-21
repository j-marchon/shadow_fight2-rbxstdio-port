// TypeDefIndex 3171
// Namespace: 
// public class IPCACEBFONO : OMLLDCIMLBB<object>
// Fields:
//   private const float MKBJAMLPMJB = 0.25;
//   private const int EDFBPPGLPNB = 30;
//   private const int GJDBJJAEFBF = 2;
//   private const int PIPPLEHNBNH = 150;
//   private List<IPCACEBFONO.ONKMJNMABJI> KCKCIPHKEEP; // 0x18
//   private int BJIKPLGMOMI; // 0x20
//   private NKOIBKNPICN MAABMIGPEIL; // 0x28
//   private NKOIBKNPICN EANHEBKMBKB; // 0x30
//   private int EHMBDMLBKEA; // 0x38

// ===== public void .ctor()  [RVA 0x34E190C]
// IPCACEBFONO$$.ctor @ RVA 0x34E190C

void IPCACEBFONO___ctor(IPCACEBFONO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *pSVar3;
  NKOIBKNPICN_o *pNVar4;
  NKOIBKNPICN_o **ppNVar5;
  IPCACEBFONO_ONKMJNMABJI_o *__this_00;
  MethodInfo *extraout_x1;
  IPCACEBFONO_ONKMJNMABJI_array *pIVar6;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o **ppSVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568738 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_set_Capacity__);
    FUN_01bab630(&System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_TypeInfo);
    FUN_01bab630(&NKOIBKNPICN_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&IPCACEBFONO_ONKMJNMABJI_TypeInfo);
    DAT_04568738 = 1;
    method = extraout_x1;
  }
  pSVar3 = (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>__ctor__);
  ppSVar7 = &(__this->fields).KCKCIPHKEEP;
  *ppSVar7 = pSVar3;
  thunk_FUN_01c20e04(ppSVar7,pSVar3);
  auVar9 = thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
  pNVar4 = auVar9._0_8_;
  NKOIBKNPICN___ctor(pNVar4,auVar9._8_8_);
  ppNVar5 = &(__this->fields).MAABMIGPEIL;
  *ppNVar5 = pNVar4;
  thunk_FUN_01c20e04(ppNVar5,pNVar4);
  auVar9 = thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
  pNVar4 = auVar9._0_8_;
  NKOIBKNPICN___ctor(pNVar4,auVar9._8_8_);
  ppNVar5 = &(__this->fields).EANHEBKMBKB;
  *ppNVar5 = pNVar4;
  thunk_FUN_01c20e04(ppNVar5,pNVar4);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).BJIKPLGMOMI = 0;
  (__this->fields).EHMBDMLBKEA = 0;
  if (*ppSVar7 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)*ppSVar7,0x96,
               Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_set_Capacity__);
    iVar8 = 1;
    while( true ) {
      __this_00 = (IPCACEBFONO_ONKMJNMABJI_o *)thunk_FUN_01bda818(IPCACEBFONO_ONKMJNMABJI_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) break;
      (__this_00->fields).BAKEKHHEKIB = iVar8;
      (__this_00->fields).HLFBMBHOPMI = iVar8;
      (__this_00->fields).BCHBDELEFGK = false;
      lVar2 = Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_Add__;
      pSVar3 = *ppSVar7;
      if (pSVar3 == (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) break;
      pIVar6 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pIVar6 == (IPCACEBFONO_ONKMJNMABJI_array *)0x0) break;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pIVar6->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pIVar6->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
      if (iVar8 == 0x97) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JLOLDCGDOKH()  [RVA 0x34E1B04]
// IPCACEBFONO$$JLOLDCGDOKH @ RVA 0x34E1B04

void IPCACEBFONO__JLOLDCGDOKH(IPCACEBFONO_o *__this,MethodInfo *method)

{
  if ((DAT_04568739 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04568739 = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,0,(Il2CppObject *)(__this->fields).MAABMIGPEIL,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x34E1B54]
// IPCACEBFONO$$DGLJCGNHLIG @ RVA 0x34E1B54

void IPCACEBFONO__DGLJCGNHLIG(IPCACEBFONO_o *__this,MethodInfo *method)

{
  int iVar1;
  NKOIBKNPICN_o *pNVar2;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_int__o *pSVar4;
  int index;
  
  if ((DAT_0456873a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Item__);
    DAT_0456873a = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).EANHEBKMBKB;
  if (pNVar2 != (NKOIBKNPICN_o *)0x0) {
    NKOIBKNPICN__NDNPGAKJLHM(pNVar2,method);
    pNVar2 = (__this->fields).MAABMIGPEIL;
    if (pNVar2 != (NKOIBKNPICN_o *)0x0) {
      NKOIBKNPICN__NDNPGAKJLHM(pNVar2,method_00);
      pNVar2 = (__this->fields).MAABMIGPEIL;
      if ((pNVar2 != (NKOIBKNPICN_o *)0x0) &&
         (pSVar4 = (pNVar2->fields).OOIGOEAHPMA,
         pSVar4 != (System_Collections_Generic_List_int__o *)0x0)) {
        (pSVar4->fields)._size = 0;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        __this_00 = (__this->fields).KCKCIPHKEEP;
        if (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
          iVar1 = (__this_00->fields)._size;
          if (iVar1 < 1) {
            return;
          }
          index = 0;
          do {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) break;
            index = index + 1;
            *(undefined1 *)&pIVar3[1].monitor = 0;
            if (iVar1 == index) {
              return;
            }
            __this_00 = (__this->fields).KCKCIPHKEEP;
          } while (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PLEECEKPNGM()  [RVA 0x34E1C2C]
// IPCACEBFONO$$PLEECEKPNGM @ RVA 0x34E1C2C

void IPCACEBFONO__PLEECEKPNGM(IPCACEBFONO_o *__this,MethodInfo *method)

{
  if ((DAT_0456873b & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456873b = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,1,(Il2CppObject *)(__this->fields).MAABMIGPEIL,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== private void NKMKIGOGMPK()  [RVA 0x34E1C7C]
// IPCACEBFONO$$NKMKIGOGMPK @ RVA 0x34E1C7C

void IPCACEBFONO__NKMKIGOGMPK(IPCACEBFONO_o *__this,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  undefined8 uVar4;
  NKOIBKNPICN_o *pNVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Int32_array *pSVar7;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456873c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    auVar8 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__
                         );
    DAT_0456873c = 1;
  }
  uVar4 = auVar8._0_8_;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).MAABMIGPEIL;
  if ((pNVar5 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar6 = (pNVar5->fields).KJNPENJKBKD, pSVar6 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    __this_00 = (__this->fields).KCKCIPHKEEP;
    uVar4 = 0;
    if (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                            );
          lVar2 = Method_System_Collections_Generic_List<int>_Add__;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                      );
            return;
          }
          if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(char *)&local_50.fields._current[1].monitor == '\0');
        pNVar5 = (__this->fields).MAABMIGPEIL;
        if (pNVar5 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (pNVar5->fields).KJNPENJKBKD;
        if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
        item = *(int32_t *)((long)&local_50.fields._current[1].klass + 4);
        pSVar7 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (pSVar6,item,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,auVar8._8_8_);
}


// ===== public void OGJLHHJEIOG(int MFDCCBAJNIO)  [RVA 0x34E1E7C]
// IPCACEBFONO$$OGJLHHJEIOG @ RVA 0x34E1E7C

void IPCACEBFONO__OGJLHHJEIOG(IPCACEBFONO_o *__this,int32_t MFDCCBAJNIO,MethodInfo *method)

{
  uint item;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar4;
  NKOIBKNPICN_o *pNVar5;
  IPCACEBFONO_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Int32_array *pSVar7;
  
  if ((DAT_0456873d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_0456873d = 1;
  }
  pIVar4 = IPCACEBFONO__AJDGKKOPLIM(__this,MFDCCBAJNIO,method);
  if ((pIVar4 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) || ((pIVar4->fields).BCHBDELEFGK != false)) {
    return;
  }
  (pIVar4->fields).BCHBDELEFGK = true;
  pNVar5 = (__this->fields).MAABMIGPEIL;
  (__this->fields).EHMBDMLBKEA = 0;
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  if ((pNVar5 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar6 = (pNVar5->fields).OOIGOEAHPMA, pSVar6 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    item = (pIVar4->fields).HLFBMBHOPMI;
    method_00 = (MethodInfo *)(ulong)item;
    pSVar7 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pSVar7 != (System_Int32_array *)0x0) {
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar7->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar7->m_Items[(int)uVar1] = item;
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (pSVar6,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pNVar5 = (__this->fields).MAABMIGPEIL;
        method_00 = extraout_x1;
        if (pNVar5 == (NKOIBKNPICN_o *)0x0) goto LAB_035e1fd4;
      }
      do {
        pSVar6 = (pNVar5->fields).OOIGOEAHPMA;
        if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
        if ((pSVar6->fields)._size < 3) {
          NKOIBKNPICN__NDNPGAKJLHM(pNVar5,method_00);
          IPCACEBFONO__NKMKIGOGMPK(__this,method_01);
          pNVar5 = (__this->fields).MAABMIGPEIL;
          if (pNVar5 != (NKOIBKNPICN_o *)0x0) {
            iVar3 = IPCACEBFONO__FAGKGMMBPNG
                              (__this_00,(pNVar5->fields).OOIGOEAHPMA,(pNVar5->fields).KJNPENJKBKD,
                               in_x3);
            (pNVar5->fields).BHJAGFIAEAA = iVar3;
            IPCACEBFONO__JLOLDCGDOKH(__this,method_02);
            return;
          }
          break;
        }
        System_Collections_Generic_List<int>__RemoveAt
                  (pSVar6,0,Method_System_Collections_Generic_List<int>_RemoveAt__);
        pNVar5 = (__this->fields).MAABMIGPEIL;
        method_00 = extraout_x1_00;
      } while (pNVar5 != (NKOIBKNPICN_o *)0x0);
    }
  }
LAB_035e1fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BBKKFLFMBAB(int MFDCCBAJNIO)  [RVA 0x34E2390]
// IPCACEBFONO$$BBKKFLFMBAB @ RVA 0x34E2390

void IPCACEBFONO__BBKKFLFMBAB(IPCACEBFONO_o *__this,int32_t MFDCCBAJNIO,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  bool bVar3;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  MethodInfo *method_00;
  NKOIBKNPICN_o *pNVar6;
  System_Int32_array *pSVar7;
  
  if ((DAT_0456873e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    DAT_0456873e = 1;
  }
  pIVar4 = IPCACEBFONO__AJDGKKOPLIM(__this,MFDCCBAJNIO,method);
  if (pIVar4 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) {
    return;
  }
  (pIVar4->fields).BCHBDELEFGK = false;
  pNVar6 = (__this->fields).MAABMIGPEIL;
  if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar5 = (pNVar6->fields).OOIGOEAHPMA, pSVar5 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    bVar3 = System_Collections_Generic_List<int>__Contains
                      (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                       Method_System_Collections_Generic_List<int>_Contains__);
    if (bVar3) {
      return;
    }
    pNVar6 = (__this->fields).MAABMIGPEIL;
    if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
       (pSVar5 = (pNVar6->fields).KJNPENJKBKD,
       pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
      System_Collections_Generic_List<int>__IndexOf
                (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                 Method_System_Collections_Generic_List<int>_IndexOf__);
      pNVar6 = (__this->fields).MAABMIGPEIL;
      if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
         (pSVar5 = (pNVar6->fields).KJNPENJKBKD,
         pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
        bVar3 = System_Collections_Generic_List<int>__Contains
                          (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                           Method_System_Collections_Generic_List<int>_Contains__);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (!bVar3) {
          return;
        }
        pNVar6 = (__this->fields).MAABMIGPEIL;
        if ((pNVar6 != (NKOIBKNPICN_o *)0x0) &&
           (pSVar5 = (pNVar6->fields).JCJPICMGIHE,
           pSVar5 != (System_Collections_Generic_List_int__o *)0x0)) {
          item = (pIVar4->fields).HLFBMBHOPMI;
          pSVar7 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pSVar7 != (System_Int32_array *)0x0) {
            uVar1 = (pSVar5->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (pSVar5->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (pSVar5,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pNVar6 = (__this->fields).MAABMIGPEIL;
              if (pNVar6 == (NKOIBKNPICN_o *)0x0) goto LAB_035e2510;
            }
            pSVar5 = (pNVar6->fields).KJNPENJKBKD;
            if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
              System_Collections_Generic_List<int>__Remove
                        (pSVar5,(pIVar4->fields).HLFBMBHOPMI,
                         Method_System_Collections_Generic_List<int>_Remove__);
              IPCACEBFONO__PLEECEKPNGM(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_035e2510:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDHAMOEKNNK()  [RVA 0x34E2514]
// IPCACEBFONO$$BDHAMOEKNNK @ RVA 0x34E2514

void IPCACEBFONO__BDHAMOEKNNK(IPCACEBFONO_o *__this,MethodInfo *method)

{
  NKOIBKNPICN_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_int__o *pSVar2;
  
  if ((DAT_0456873f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_0456873f = 1;
    method = extraout_x1;
  }
  if ((__this->fields).BJIKPLGMOMI == 0x1e) {
    pNVar1 = (__this->fields).MAABMIGPEIL;
    if (pNVar1 == (NKOIBKNPICN_o *)0x0) goto LAB_035e25b4;
    NKOIBKNPICN__NDNPGAKJLHM(pNVar1,method);
    (__this->fields).BJIKPLGMOMI = 0;
    method = extraout_x1_00;
  }
  if (0xe < (__this->fields).EHMBDMLBKEA) {
    pNVar1 = (__this->fields).MAABMIGPEIL;
    if ((pNVar1 == (NKOIBKNPICN_o *)0x0) ||
       (pSVar2 = (pNVar1->fields).OOIGOEAHPMA,
       pSVar2 == (System_Collections_Generic_List_int__o *)0x0)) {
LAB_035e25b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    (__this->fields).EHMBDMLBKEA = 0;
  }
  IPCACEBFONO__NKMKIGOGMPK(__this,method);
  (__this->fields).EHMBDMLBKEA = (__this->fields).EHMBDMLBKEA + 1;
  (__this->fields).BJIKPLGMOMI = (__this->fields).BJIKPLGMOMI + 1;
  return;
}


// ===== public NKOIBKNPICN PHGCNONBLCE(int OAFGMHOFEKM)  [RVA 0x34E25B8]
// IPCACEBFONO$$PHGCNONBLCE @ RVA 0x34E25B8

NKOIBKNPICN_o *
IPCACEBFONO__PHGCNONBLCE(IPCACEBFONO_o *__this,int32_t OAFGMHOFEKM,MethodInfo *method)

{
  NKOIBKNPICN_o *__this_00;
  
  __this_00 = (__this->fields).EANHEBKMBKB;
  if (__this_00 != (NKOIBKNPICN_o *)0x0) {
    NKOIBKNPICN__FOOHBJNHOKK(__this_00,(__this->fields).MAABMIGPEIL,method);
    return (__this->fields).EANHEBKMBKB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,OAFGMHOFEKM);
}


// ===== private IPCACEBFONO.ONKMJNMABJI AJDGKKOPLIM(int GCMHMONNHII)  [RVA 0x34E1FD8]
// IPCACEBFONO$$AJDGKKOPLIM @ RVA 0x34E1FD8

IPCACEBFONO_ONKMJNMABJI_o *
IPCACEBFONO__AJDGKKOPLIM(IPCACEBFONO_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568740 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
    DAT_04568740 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KCKCIPHKEEP;
  if (__this_00 == (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                      );
    if (!bVar1) {
      pIVar2 = (IPCACEBFONO_ONKMJNMABJI_o *)0x0;
      break;
    }
    if ((IPCACEBFONO_ONKMJNMABJI_o *)local_48.fields._current == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = (IPCACEBFONO_ONKMJNMABJI_o *)local_48.fields._current;
  } while (((IPCACEBFONO_ONKMJNMABJI_Fields *)((long)local_48.fields._current + 0x10))->BAKEKHHEKIB
           != GCMHMONNHII);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__);
  return pIVar2;
}


// ===== public void EKBJDKNNHGL(NKOIBKNPICN CJNHFNHJHPE)  [RVA 0x34E25E0]
// IPCACEBFONO$$EKBJDKNNHGL @ RVA 0x34E25E0

void IPCACEBFONO__EKBJDKNNHGL(IPCACEBFONO_o *__this,NKOIBKNPICN_o *CJNHFNHJHPE,MethodInfo *method)

{
  NKOIBKNPICN_o *pNVar1;
  MethodInfo *method_00;
  NKOIBKNPICN_o **ppNVar2;
  
  if (CJNHFNHJHPE != (NKOIBKNPICN_o *)0x0) {
    pNVar1 = NKOIBKNPICN__GOGPCNMIJOB(CJNHFNHJHPE,(MethodInfo *)CJNHFNHJHPE);
    (__this->fields).MAABMIGPEIL = pNVar1;
    thunk_FUN_01c20e04();
    pNVar1 = NKOIBKNPICN__GOGPCNMIJOB(CJNHFNHJHPE,method_00);
    ppNVar2 = &(__this->fields).EANHEBKMBKB;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NKOIBKNPICN NPDCHGGEAOK()  [RVA 0x34E2630]
// IPCACEBFONO$$NPDCHGGEAOK @ RVA 0x34E2630

NKOIBKNPICN_o * IPCACEBFONO__NPDCHGGEAOK(IPCACEBFONO_o *__this,MethodInfo *method)

{
  return (__this->fields).MAABMIGPEIL;
}


// ===== private NKOIBKNPICN.AAHBFHOIPGB FAGKGMMBPNG(List<int> GOAFNAHMHOJ, List<int> AKELCELDNKJ)  [RVA 0x34E2130]
// IPCACEBFONO$$FAGKGMMBPNG @ RVA 0x34E2130

/* WARNING: Removing unreachable block (ram,0x035e22d4) */

int32_t IPCACEBFONO__FAGKGMMBPNG
                  (IPCACEBFONO_o *__this,System_Collections_Generic_List_int__o *GOAFNAHMHOJ,
                  System_Collections_Generic_List_int__o *AKELCELDNKJ,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  
  if ((DAT_04568741 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    __this = (IPCACEBFONO_o *)FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__)
    ;
    DAT_04568741 = 1;
  }
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  if (GOAFNAHMHOJ == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if ((GOAFNAHMHOJ->fields)._size == 1) {
    uVar2 = 0;
  }
  else {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,GOAFNAHMHOJ,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_60._8_4_ = local_98.fields._index;
    local_60._12_4_ = local_98.fields._version;
    local_60._0_8_ = local_98.fields._list;
    local_50 = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar3 = 8;
        break;
      }
      if (AKELCELDNKJ == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_50;
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_98,AKELCELDNKJ,Method_System_Collections_Generic_List<int>_GetEnumerator__);
      local_80._8_4_ = local_98.fields._index;
      local_80._12_4_ = local_98.fields._version;
      local_80._0_8_ = local_98.fields._list;
      local_70 = local_98.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                           Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
        if (!bVar1) {
          iVar3 = 3;
          goto LAB_035e2264;
        }
      } while (iVar3 != (int)local_70);
      iVar3 = 7;
LAB_035e2264:
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    } while ((iVar3 == 3) || (iVar3 == 0));
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    uVar2 = (uint)(iVar3 != 7);
  }
  return uVar2;
}

