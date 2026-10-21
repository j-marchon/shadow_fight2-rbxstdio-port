// Util$$EGNDHMHOPCG @ RVA 0x32098FC

float Util__EGNDHMHOPCG(float MFENNGDJCMF,float CHOCOAGNFDD,float CIGIGIJOFMK,float BLFMJKGBOMI,
                       float KEFILECBPMF,MethodInfo *method)

{
  float fVar1;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  local_48 = BLFMJKGBOMI;
  fStack_44 = CIGIGIJOFMK;
  local_38 = CHOCOAGNFDD;
  fStack_34 = MFENNGDJCMF;
  if ((DAT_04566e66 & 1) == 0) {
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<float>__);
    DAT_04566e66 = 1;
  }
  if (1e-10 <= ABS(BLFMJKGBOMI - CIGIGIJOFMK)) {
    fVar1 = CHOCOAGNFDD;
    if ((KEFILECBPMF < BLFMJKGBOMI) && (fVar1 = MFENNGDJCMF, CIGIGIJOFMK < KEFILECBPMF)) {
      fVar1 = BLFMJKGBOMI - CIGIGIJOFMK;
      if (fVar1 < 0.0) {
        Util__JGJFNOOGAEP<float>(&fStack_44,&local_48,Method_Util_JGJFNOOGAEP<float>__);
        Util__JGJFNOOGAEP<float>(&fStack_34,&local_38,Method_Util_JGJFNOOGAEP<float>__);
        fVar1 = local_48 - fStack_44;
        CIGIGIJOFMK = fStack_44;
        CHOCOAGNFDD = local_38;
        MFENNGDJCMF = fStack_34;
      }
      fVar1 = MFENNGDJCMF + (KEFILECBPMF - CIGIGIJOFMK) * ((CHOCOAGNFDD - MFENNGDJCMF) / fVar1);
    }
  }
  else {
    fVar1 = (MFENNGDJCMF + CHOCOAGNFDD) * 0.5;
  }
  return fVar1;
}

