import datetime

def say_hello(name="World"):
    return f"Hello, {name}!"

def generate_html():
    current_time = datetime.datetime.now()
    
    html_content = f"""
    <!DOCTYPE html>
    <html lang="ko">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>CI/CD 테스트 결과</title>
        <style>
            body
            {{
                font-family: Arial, sans-serif;
                max-width: 800px;
                margin: 0 auto;
                padding: 20px;
                background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
                color: white;
                min-height: 100vh;
            }}
            .container
            {{
                background: rgba(255, 255, 255, 0.1);
                padding: 30px;
                border-radius: 15px;
                backdrop-filter: blur(10px);
                text-align: center;
            }}
            h1
            {{
                font-size: 2.5em;
                margin-bottom: 20px;
            }}
            .success
            {{
                background: #4CAF50;
                padding: 15px;
                border-radius: 10px;
                margin: 20px 0;
            }}
            .info
            {{
                background: rgba(255, 255, 255, 0.2);
                padding: 15px;
                border-radius: 10px;
                margin: 20px 0;
            }}
        </style>
    </head>
    <body>
        <div class="container">
            <h1>🚀 CI/CD 파이프라인 성공!</h1>
            
            <div class="success">
                <h2>✅ 배포 완료</h2>
                <p>{say_hello("GitHub Actions")}</p>
            </div>
            
            <div class="info">
                <h3>📊 배포 정보</h3>
                <p><strong>배포 시간:</strong> {current_time.strftime('%Y-%m-%d %H:%M:%S')}</p>
                <p><strong>환경:</strong> GitHub Actions</p>
                <p><strong>상태:</strong> 모든 테스트 통과</p>
            </div>
            
            <div class="info">
                <h3>🎯 성과</h3>
                <ul style="text-align: left;">
                    <li>✅ 소스코드 체크아웃 완료</li>
                    <li>✅ Python 환경 설정 완료</li>
                    <li>✅ 의존성 설치 완료</li>
                    <li>✅ 스크립트 실행 성공</li>
                    <li>✅ HTML 생성 및 배포 완료</li>
                </ul>
            </div>
            
            <p><em>이 페이지는 GitHub Actions로 자동 생성되고 배포되었습니다!</em></p>
        </div>
    </body>
    </html>
    """
    
    # src 폴더가 없으면 생성
    import os
    if not os.path.exists('src'):
        os.makedirs('src')
    
    # HTML 파일 생성
    with open('src/hello_index.html', 'w', encoding='utf-8') as f:
        f.write(html_content)
    
    print("HTML 파일이 성공적으로 생성되었습니다!")

if __name__ == "__main__":
    print(say_hello("GitHub Actions"))
    print("CI/CD Pipeline is working!")
    generate_html()
    print("웹사이트가 src/hello_index.html에 생성되었습니다!")