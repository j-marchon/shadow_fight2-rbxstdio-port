// NKPJLEMPIKD$$HNIHOIAMDPC @ RVA 0x30000E4

void NKPJLEMPIKD__HNIHOIAMDPC
               (NKPJLEMPIKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t CJNHFNHJHPE;
  System_String_o *s;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  
  if ((DAT_04565b1e & 1) == 0) {
    FUN_01bab630(&StringLiteral_9146);
    FUN_01bab630(&StringLiteral_4507);
    FUN_01bab630(&StringLiteral_12495);
    FUN_01bab630(&StringLiteral_7630);
    FUN_01bab630(&StringLiteral_7125);
    FUN_01bab630(&StringLiteral_7632);
    FUN_01bab630(&StringLiteral_5999);
    FUN_01bab630(&StringLiteral_11440);
    FUN_01bab630(&StringLiteral_3049);
    FUN_01bab630(&StringLiteral_3050);
    FUN_01bab630(&StringLiteral_2974);
    FUN_01bab630(&StringLiteral_2980);
    FUN_01bab630(&StringLiteral_7124);
    FUN_01bab630(&StringLiteral_2978);
    FUN_01bab630(&StringLiteral_8778);
    FUN_01bab630(&StringLiteral_10374);
    DAT_04565b1e = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  s = (System_String_o *)
      (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar2 < 0x6d7c14fa) {
    if (uVar2 < 0x3f0ca91c) {
      if (uVar2 < 0xa8cee63) {
        if (uVar2 == 0x71c7f61) {
          bVar1 = System_String__op_Equality(s,StringLiteral_5999,(MethodInfo *)0x0);
          if (bVar1) {
            CJNHFNHJHPE = 2;
            goto LAB_031005ac;
          }
        }
        else if ((uVar2 == 0xa8cee62) &&
                (bVar1 = System_String__op_Equality(s,StringLiteral_3049,(MethodInfo *)0x0), bVar1))
        {
          CJNHFNHJHPE = 0xf;
          goto LAB_031005ac;
        }
      }
      else if (uVar2 == 0x3c20cdc4) {
        bVar1 = System_String__op_Equality(s,StringLiteral_8778,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 8;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x3f0ca91b) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_7125,(MethodInfo *)0x0), bVar1)) {
        CJNHFNHJHPE = 5;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 < 0x5467ec77) {
      if (uVar2 == 0x4a8f91e2) {
        bVar1 = System_String__op_Equality(s,StringLiteral_2974,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 10;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x5467ec76) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_12495,(MethodInfo *)0x0), bVar1))
      {
        CJNHFNHJHPE = 3;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 == 0x5bfd1708) {
      bVar1 = System_String__op_Equality(s,StringLiteral_7124,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 6;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0x6d7c14f9) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_2978,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 0xb;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 < 0xc556c0de) {
    if (uVar2 < 0x99808145) {
      if (uVar2 == 0x83cd7fa1) {
        bVar1 = System_String__op_Equality(s,StringLiteral_4507,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 4;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x99808144) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_7632,(MethodInfo *)0x0), bVar1)) {
        CJNHFNHJHPE = 0xc;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 == 0xc129aabd) {
      bVar1 = System_String__op_Equality(s,StringLiteral_9146,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 0xe;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0xc556c0dd) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_7630,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 0xd;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 < 0xdc307a19) {
    if (uVar2 == 0xc67ade54) {
      bVar1 = System_String__op_Equality(s,StringLiteral_3050,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 0x10;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0xdc307a18) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_10374,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 7;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 == 0xde7ac087) {
    bVar1 = System_String__op_Equality(s,StringLiteral_2980,(MethodInfo *)0x0);
    if (bVar1) {
      CJNHFNHJHPE = 9;
      goto LAB_031005ac;
    }
  }
  else if ((uVar2 == 0xf4fddefd) &&
          (bVar1 = System_String__op_Equality(s,StringLiteral_11440,(MethodInfo *)0x0), bVar1)) {
    CJNHFNHJHPE = 1;
    goto LAB_031005ac;
  }
  CJNHFNHJHPE = 0;
LAB_031005ac:
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar3;
  return;
}

