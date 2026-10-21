// OMHODMCHILE$$NPKGDBHJKCK @ RVA 0x3493D8C

System_String_o *
OMHODMCHILE__NPKGDBHJKCK
          (System_Byte_array *MOPNMEHIMFJ,System_Byte_array *LFINFBNOLFG,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t length;
  System_Text_Encoding_o *pSVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  
  if (LFINFBNOLFG != (System_Byte_array *)0x0) {
    uVar2 = (uint)LFINFBNOLFG->max_length;
    if (0 < (long)((ulong)uVar2 << 0x20)) {
      uVar5 = 0;
      do {
        if (uVar2 <= uVar5) {
LAB_03593e3c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (MOPNMEHIMFJ == (System_Byte_array *)0x0) goto LAB_03593e40;
        uVar1 = (uint)uVar5 & 0x3f;
        if ((uint)MOPNMEHIMFJ->max_length <= uVar1) goto LAB_03593e3c;
        LFINFBNOLFG->m_Items[uVar5] = MOPNMEHIMFJ->m_Items[uVar1] ^ LFINFBNOLFG->m_Items[uVar5];
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar2);
    }
    pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar3 != (System_Text_Encoding_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(pSVar3->klass->vtable)._37_GetString.methodPtr)
                         (pSVar3,LFINFBNOLFG,(pSVar3->klass->vtable)._37_GetString.method);
      if (pSVar4 != (System_String_o *)0x0) {
        length = System_String__IndexOf(pSVar4,0xe44f,(MethodInfo *)0x0);
        pSVar4 = System_String__Substring(pSVar4,0,length,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
LAB_03593e40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

