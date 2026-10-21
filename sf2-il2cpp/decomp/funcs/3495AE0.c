// NGKBNOEJLPH$$PNFLJIDACPI @ RVA 0x3495AE0

int32_t NGKBNOEJLPH__PNFLJIDACPI
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__List_OANGEOLKMJG____o *pSVar3;
  int iVar4;
  int index;
  
  if ((DAT_04568466 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    __this = (NGKBNOEJLPH_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    DAT_04568466 = 1;
  }
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    __this_00 = (BCKBBGCOMJD->fields).MPLCPGJEHPG;
    __this = (NGKBNOEJLPH_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 < 1) {
        return 0;
      }
      index = 0;
      iVar4 = 0;
      do {
        __this = (NGKBNOEJLPH_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
        iVar2 = iVar4;
        if (__this != (NGKBNOEJLPH_o *)0x0) {
          pSVar3 = __this[1].fields.HGKKJGLHKNO;
          if (pSVar3 == (System_Collections_Generic_List_MGNDHCBAPEN_string__List_OANGEOLKMJG____o *
                        )0x0) break;
          iVar2 = pSVar3[5].fields._size;
          if (iVar2 <= iVar4) {
            iVar2 = iVar4;
          }
        }
        iVar4 = iVar2;
        index = index + 1;
        if (iVar1 == index) {
          return iVar4;
        }
        __this_00 = (BCKBBGCOMJD->fields).MPLCPGJEHPG;
        __this = (NGKBNOEJLPH_o *)0x0;
      } while (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

