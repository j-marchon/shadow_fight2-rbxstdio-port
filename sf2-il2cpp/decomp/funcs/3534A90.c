// JJPNLEPEAFM$$NBABCABBABL @ RVA 0x3534A90

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NBABCABBABL
          (System_String_o *NJLKBEHCEKD,System_String_o *JEHFOBHMGJM,
          System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE,IGNEHHMICKB_o *EFGJLFEICDO,
          System_Action_object__o *IELDNEAAPBE,System_String_o *JFFIPGDMEHA,bool LNKNCDCHHPE,
          System_String_o *GBCJJKIDHGI,int32_t KFPEGGLEHFO,int32_t IPNMMMGEAOA,bool PCKPENDCPGA,
          bool KONDEAJMKCK,float INEHHHBAHGP,MethodInfo *method)

{
  NBLEEDEAPHB_o *__this;
  Il2CppObject *pIVar1;
  KNJPDILMPDG_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  int iVar4;
  int index;
  undefined4 local_64;
  
  if ((DAT_04568a80 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&KNJPDILMPDG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_04568a80 = 1;
  }
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar4 = (IJIPABLCAKE->fields)._size;
    if (0 < iVar4) {
      index = 0;
      do {
        __this = (NBLEEDEAPHB_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,index,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if (__this == (NBLEEDEAPHB_o *)0x0) goto LAB_03634cb4;
        NBLEEDEAPHB__ONNMMOCEJNN(__this,(MethodInfo *)0x0);
        iVar4 = (IJIPABLCAKE->fields)._size;
        index = index + 1;
      } while (index < iVar4);
    }
    if (0 < iVar4) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
      if (*(char *)&pIVar1[6].klass != '\0') {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
        if ((long)pIVar1[5].monitor < 1) {
          if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
            pIVar1 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
            if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
            local_64 = *(undefined4 *)&pIVar1[5].klass;
            uVar3 = thunk_FUN_01bda448(int_TypeInfo,&local_64);
            (*(code *)(IELDNEAAPBE->fields).super.super.invoke_impl)
                      ((IELDNEAAPBE->fields).super.super.method_code,uVar3,
                       (IELDNEAAPBE->fields).super.super.method);
          }
          return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
        }
      }
    }
    __this_00 = (KNJPDILMPDG_o *)thunk_FUN_01bda818(KNJPDILMPDG_TypeInfo);
    KNJPDILMPDG___ctor(__this_00,NJLKBEHCEKD,JEHFOBHMGJM,IJIPABLCAKE,EFGJLFEICDO,IELDNEAAPBE,
                       GBCJJKIDHGI,JFFIPGDMEHA,LNKNCDCHHPE,KFPEGGLEHFO,IPNMMMGEAOA,PCKPENDCPGA,
                       KONDEAJMKCK,840.0,INEHHHBAHGP,(MethodInfo *)0x0);
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x118,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_03634cb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

