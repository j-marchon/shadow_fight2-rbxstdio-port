// OMANDMDCGMF$$GPEPOJMOHKA @ RVA 0x329AD98

/* WARNING: Type propagation algorithm not settling */

float OMANDMDCGMF__GPEPOJMOHKA
                (UnityEngine_Font_o *ADNMCIPDIJG,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,
                System_String_o *CJNHFNHJHPE,int32_t NJBICBHLOMO,
                OMANDMDCGMF_MOHBDJOFHEN_o *LPHIIIFKLND,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  ulong uVar5;
  float fVar6;
  UnityEngine_CharacterInfo_Fields local_80;
  
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
LAB_0339aeac:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (CJNHFNHJHPE->fields)._stringLength;
  if (CKCOLJLFJDB < iVar1) {
    iVar1 = iVar1 + -1;
    if (iVar1 <= DEDNHOELFOD) {
      DEDNHOELFOD = iVar1;
    }
    if (CKCOLJLFJDB <= DEDNHOELFOD) {
      local_80.flipped = false;
      local_80._49_3_ = 0;
      local_80.vert.fields.m_YMin = 0.0;
      local_80.vert.fields.m_Width = 0.0;
      local_80.uv.fields.m_Height = 0.0;
      local_80.vert.fields.m_XMin = 0.0;
      local_80.size = 0;
      local_80.style = 0;
      local_80.vert.fields.m_Height = 0.0;
      local_80.width = 0.0;
      local_80.uv.fields.m_YMin = 0.0;
      local_80.uv.fields.m_Width = 0.0;
      local_80.index = 0;
      local_80.uv.fields.m_XMin = 0.0;
      if (LPHIIIFKLND != (OMANDMDCGMF_MOHBDJOFHEN_o *)0x0) {
        fVar6 = 0.0;
        do {
          uVar5 = (*(code *)(LPHIIIFKLND->fields).super.super.invoke_impl)
                            ((LPHIIIFKLND->fields).super.super.method_code,CKCOLJLFJDB,
                             (LPHIIIFKLND->fields).super.super.method);
          if ((uVar5 & 1) != 0) {
            uVar3 = System_String__get_Chars(CJNHFNHJHPE,CKCOLJLFJDB,(MethodInfo *)0x0);
            if (ADNMCIPDIJG == (UnityEngine_Font_o *)0x0) break;
            bVar2 = UnityEngine_Font__GetCharacterInfo
                              (ADNMCIPDIJG,uVar3,(UnityEngine_CharacterInfo_o *)&local_80,
                               NJBICBHLOMO,(MethodInfo *)0x0);
            if ((!bVar2) &&
               (uVar3 = System_String__get_Chars(CJNHFNHJHPE,CKCOLJLFJDB,(MethodInfo *)0x0),
               uVar3 != 10)) {
              return -1.0;
            }
            iVar4 = UnityEngine_CharacterInfo__get_advance
                              ((UnityEngine_CharacterInfo_o *)&local_80,(MethodInfo *)0x0);
            fVar6 = fVar6 + (float)iVar4;
          }
          CKCOLJLFJDB = CKCOLJLFJDB + 1;
          if (DEDNHOELFOD < CKCOLJLFJDB) {
            return fVar6;
          }
        } while( true );
      }
      goto LAB_0339aeac;
    }
  }
  return -1.0;
}

