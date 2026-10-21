// EGPGCNBJPEH$$FOHAELNOKHC @ RVA 0x31A724C

void EGPGCNBJPEH__FOHAELNOKHC
               (EGPGCNBJPEH_o *__this,UnityEngine_Networking_UnityWebRequest_o *OICIFAIBNDM,
               PDBDELCMKJG_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t value;
  uint uVar1;
  ulong uVar2;
  System_ValueTuple_string__string__array *pSVar3;
  ulong uVar4;
  System_String_o **ppSVar5;
  double dVar6;
  
  if ((DAT_04566b18 & 1) == 0) {
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566b18 = 1;
  }
  if (OKBIKHHKOEN != (PDBDELCMKJG_o *)0x0) {
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar6 = System_TimeSpan__get_TotalSeconds
                      ((System_TimeSpan_o)&(OKBIKHHKOEN->fields).KBFOKFPKAKN,(MethodInfo *)0x0);
    if (OICIFAIBNDM != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      value = -0x80000000;
      if (dVar6 != INFINITY) {
        value = (int)dVar6;
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout(OICIFAIBNDM,value,(MethodInfo *)0x0);
      pSVar3 = (OKBIKHHKOEN->fields).EBIPCCLLMCP;
      if ((pSVar3 != (System_ValueTuple_string__string__array *)0x0) &&
         (0 < (int)pSVar3->max_length)) {
        uVar4 = 0;
        uVar2 = pSVar3->max_length & 0xffffffff;
        ppSVar5 = &pSVar3->m_Items[0].fields.Item2;
        do {
          if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                    (OICIFAIBNDM,((System_ValueTuple_string__string__Fields *)(ppSVar5 + -1))->Item1
                     ,*ppSVar5,(MethodInfo *)0x0);
          uVar1 = (uint)pSVar3->max_length;
          uVar2 = (ulong)uVar1;
          uVar4 = uVar4 + 1;
          ppSVar5 = ppSVar5 + 2;
        } while ((long)uVar4 < (long)(int)uVar1);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

