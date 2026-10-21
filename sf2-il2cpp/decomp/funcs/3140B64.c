// IPPEHAJADOO$$LBBNPGLGKNO @ RVA 0x3140B64

void IPPEHAJADOO__LBBNPGLGKNO
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *BEBLJNABOEH,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_00;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  ECAIEGNAOAL_o *KDFMDHADHMD;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  OLKKAIFGGAK_OJHIDJPICJN_o *__this_02;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  OLKKAIFGGAK_AHFAALBHPHJ_o *__this_03;
  System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__array *pSVar3;
  int iVar4;
  int index;
  
  if ((DAT_0456675e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_set_Capacity__
                );
    FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
    DAT_0456675e = 1;
  }
  if (BEBLJNABOEH != (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)0x0) {
    length = (BEBLJNABOEH->fields)._size;
    (BEBLJNABOEH->fields)._size = 0;
    (BEBLJNABOEH->fields)._version = (BEBLJNABOEH->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(BEBLJNABOEH->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,
                 (DDOAJGPFCNB->fields)._size,
                 Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_set_Capacity__
                );
      if (0 < (DDOAJGPFCNB->fields)._size) {
        iVar4 = 0;
        do {
          __this_00 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                      thunk_FUN_01bda818(
                                        System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo
                                        );
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Add__;
          pSVar3 = (BEBLJNABOEH->fields)._items;
          (BEBLJNABOEH->fields)._version = (BEBLJNABOEH->fields)._version + 1;
          if (pSVar3 == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__array *)0x0)
          goto LAB_03240dd8;
          uVar1 = (BEBLJNABOEH->fields)._size;
          if (uVar1 < (uint)pSVar3->max_length) {
            (BEBLJNABOEH->fields)._size = uVar1 + 1;
            pSVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (DDOAJGPFCNB->fields)._size);
      }
      __this_01 = (__this->fields).KBOMJBFAKKA;
      if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        iVar4 = 0;
        do {
          if ((__this_01->fields)._size <= iVar4) {
            return;
          }
          KDFMDHADHMD = (ECAIEGNAOAL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
          if (0 < (DDOAJGPFCNB->fields)._size) {
            index = 0;
            do {
              BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,
                                       index,
                                       Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__
                                      );
              if (((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
                  ((BCKBBGCOMJD->fields).EMGBDHOAIND = 0, (BCKBBGCOMJD->fields).LFCJAFPIKKC = 0,
                  KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0)) ||
                 (__this_02 = (BCKBBGCOMJD->fields).MPJKOPNODDM,
                 __this_02 == (OLKKAIFGGAK_OJHIDJPICJN_o *)0x0)) goto LAB_03240dd8;
              ELAGKBMJCOD = OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF
                                      (__this_02,(KDFMDHADHMD->fields).BGHFADDGPAD,(MethodInfo *)0x0
                                      );
              method_00 = (MethodInfo *)BEBLJNABOEH;
              IPPEHAJADOO__FHLCLICFGNA
                        (__this,KDFMDHADHMD,BCKBBGCOMJD,ELAGKBMJCOD,index,BEBLJNABOEH,in_x6);
              __this_03 = (BCKBBGCOMJD->fields).NOJKHMOEAEO;
              if (__this_03 == (OLKKAIFGGAK_AHFAALBHPHJ_o *)0x0) goto LAB_03240dd8;
              AIEIIIHLDPO = OLKKAIFGGAK_AHFAALBHPHJ__FNPJOAPMNKE
                                      (__this_03,(KDFMDHADHMD->fields).BGHFADDGPAD,(MethodInfo *)0x0
                                      );
              IPPEHAJADOO__OKKJKBEMJFN(__this,KDFMDHADHMD,BCKBBGCOMJD,AIEIIIHLDPO,index,method_00);
              index = index + 1;
            } while (index < (DDOAJGPFCNB->fields)._size);
          }
          __this_01 = (__this->fields).KBOMJBFAKKA;
          iVar4 = iVar4 + 1;
        } while (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0);
      }
    }
  }
LAB_03240dd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

