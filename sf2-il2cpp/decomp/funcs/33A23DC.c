// PAOMOCCOFDE$$KIPCFNBAHMJ @ RVA 0x33A23DC

void PAOMOCCOFDE__KIPCFNBAHMJ(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NBLEEDEAPHB_o *__this_00;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  NBLEEDEAPHB_array *pNVar3;
  
  if ((DAT_04567cc4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_PAOMOCCOFDE_IKBILKIMBCB__);
    FUN_01bab630(&StringLiteral_16970);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_16812);
    FUN_01bab630(&StringLiteral_21618);
    FUN_01bab630(&StringLiteral_14113);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567cc4 = 1;
    method = extraout_x1;
  }
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo,method);
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  if (__this_00 != (NBLEEDEAPHB_o *)0x0) {
    (__this_00->fields).KFHPFEKBDFM = 0;
    (__this_00->fields).EHKKBKHGDHE = false;
    (__this_00->fields).HBFKJIOLIAP = StringLiteral_9679;
    thunk_FUN_01c20e04();
    (__this_00->fields).ABCHAOKFLGL = StringLiteral_21618;
    thunk_FUN_01c20e04();
    IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
               Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
    if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
      pNVar3 = (IJIPABLCAKE->fields)._items;
      (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
      if (pNVar3 != (NBLEEDEAPHB_array *)0x0) {
        uVar1 = (IJIPABLCAKE->fields)._size;
        if (uVar1 < (uint)pNVar3->max_length) {
          (IJIPABLCAKE->fields)._size = uVar1 + 1;
          pNVar3->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        JJPNLEPEAFM__NBABCABBABL
                  (StringLiteral_14113,StringLiteral_16970,IJIPABLCAKE,(IGNEHHMICKB_o *)0x0,
                   IELDNEAAPBE,StringLiteral_3640,true,StringLiteral_16812,1,0,true,false,0.0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

