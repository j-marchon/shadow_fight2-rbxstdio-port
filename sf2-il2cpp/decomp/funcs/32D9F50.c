// NOMBKAHPOHM$$MBIEGCODNMB @ RVA 0x32D9F50

void NOMBKAHPOHM__MBIEGCODNMB(NOMBKAHPOHM_o *__this,AMJMGFCCAKN_o *DLNPKEIJGGG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_o *pSVar3;
  FPPKHNNABAD_o *pFVar4;
  
  if ((DAT_045675a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045675a9 = 1;
  }
  if (*(int *)&(__this->fields).KGLJICLJHEL != 6) {
    return;
  }
  if (DLNPKEIJGGG != (AMJMGFCCAKN_o *)0x0) {
    pFVar4 = (__this->fields).NDBPOFMECGL;
    item = AMJMGFCCAKN__FDPFMIPBLPH(DLNPKEIJGGG,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
      pSVar3 = (pFVar4->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar3 != (System_String_o *)0x0) {
        uVar1 = *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
        if (uVar1 < *(uint *)&pSVar3[1].klass) {
          *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
          (&pSVar3[1].monitor)[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pFVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pFVar4 = (__this->fields).NDBPOFMECGL;
        if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
          *(undefined4 *)((long)&(__this->fields).OBDMHHJBLKL + 4) =
               *(undefined4 *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

